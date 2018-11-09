<?php
/*
* Italian translation of rc-vacation
* @author Alessandro De Zorzi - <lota@nonlontano.it>
*/

$labels = array();
$labels['vacation'] = 'Risposta automatica';
$labels['vacationenable'] = 'Attiva';
$labels['vacationsubject'] = 'Oggetto';
$labels['vacationmessage'] = 'Messaggio';
$labels['vacationforwarder'] = 'Indirizzo Forward';
$labels['vacationstart'] = 'Inizio';
$labels['vacationend'] = 'Fine';
$labels['period'] = 'Periodo';
$labels['frequency'] = 'Frequenza risposte';
$labels['addressed_to'] = 'Destinatario originale';
$labels['append_subject'] = 'Accoda oggetto originale';
$labels['send_from'] = 'Mittente risposta';
$labels['vacationfrom'] = 'Dal';
$labels['vacationto'] = 'Al';
$labels['answer_no_more_than_every'] = 'Tempo minimo per una nuova risposta (allo stesso mittente)';
$labels['vacationdays'] = 'giorno(i)';
$labels['wholeday'] = 'Giornata intera';

$messages = array();
$messages['vacationinvalidstartdate'] = 'Seleziona una data di inizio valida.';
$messages['vacationinvalidenddate'] = 'Seleziona una data di fine valida.';
$messages['vacationinvaliddateinterval'] = 'L\'intervallo di date non è valido.';
$messages['vacationnosubject'] = 'Completa il campo oggetto del vacation, grazie.';
$messages['vacationnomessage'] = 'Completa il campo messaggio del vacation, grazie.';
$messages['vacationinvalidforwarder'] = 'L\'indirizzo di forward non è valido.';
$messages['vacationinvalidforwarders'] = 'La lista degli indirizzi di forward non è valida.';
$messages['vacationdriverdefaulterror'] = 'Errore di esecuzione sconosciuto';
$messages['vacationdriverconnecterror'] = 'Errore durante la connessione';
$messages['vacationdriverprocesserror'] = 'Errore durante l\'elaborazione';
