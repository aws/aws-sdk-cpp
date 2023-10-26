/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/VoiceId.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace VoiceIdMapper
      {

        static const int AMY_HASH = HashingUtils::HashString("AMY");
        static const int ASTRID_HASH = HashingUtils::HashString("ASTRID");
        static const int BIANCA_HASH = HashingUtils::HashString("BIANCA");
        static const int BRIAN_HASH = HashingUtils::HashString("BRIAN");
        static const int CAMILA_HASH = HashingUtils::HashString("CAMILA");
        static const int CARLA_HASH = HashingUtils::HashString("CARLA");
        static const int CARMEN_HASH = HashingUtils::HashString("CARMEN");
        static const int CELINE_HASH = HashingUtils::HashString("CELINE");
        static const int CHANTAL_HASH = HashingUtils::HashString("CHANTAL");
        static const int CONCHITA_HASH = HashingUtils::HashString("CONCHITA");
        static const int CRISTIANO_HASH = HashingUtils::HashString("CRISTIANO");
        static const int DORA_HASH = HashingUtils::HashString("DORA");
        static const int EMMA_HASH = HashingUtils::HashString("EMMA");
        static const int ENRIQUE_HASH = HashingUtils::HashString("ENRIQUE");
        static const int EWA_HASH = HashingUtils::HashString("EWA");
        static const int FILIZ_HASH = HashingUtils::HashString("FILIZ");
        static const int GERAINT_HASH = HashingUtils::HashString("GERAINT");
        static const int GIORGIO_HASH = HashingUtils::HashString("GIORGIO");
        static const int GWYNETH_HASH = HashingUtils::HashString("GWYNETH");
        static const int HANS_HASH = HashingUtils::HashString("HANS");
        static const int INES_HASH = HashingUtils::HashString("INES");
        static const int IVY_HASH = HashingUtils::HashString("IVY");
        static const int JACEK_HASH = HashingUtils::HashString("JACEK");
        static const int JAN_HASH = HashingUtils::HashString("JAN");
        static const int JOANNA_HASH = HashingUtils::HashString("JOANNA");
        static const int JOEY_HASH = HashingUtils::HashString("JOEY");
        static const int JUSTIN_HASH = HashingUtils::HashString("JUSTIN");
        static const int KARL_HASH = HashingUtils::HashString("KARL");
        static const int KENDRA_HASH = HashingUtils::HashString("KENDRA");
        static const int KIMBERLY_HASH = HashingUtils::HashString("KIMBERLY");
        static const int LEA_HASH = HashingUtils::HashString("LEA");
        static const int LIV_HASH = HashingUtils::HashString("LIV");
        static const int LOTTE_HASH = HashingUtils::HashString("LOTTE");
        static const int LUCIA_HASH = HashingUtils::HashString("LUCIA");
        static const int LUPE_HASH = HashingUtils::HashString("LUPE");
        static const int MADS_HASH = HashingUtils::HashString("MADS");
        static const int MAJA_HASH = HashingUtils::HashString("MAJA");
        static const int MARLENE_HASH = HashingUtils::HashString("MARLENE");
        static const int MATHIEU_HASH = HashingUtils::HashString("MATHIEU");
        static const int MATTHEW_HASH = HashingUtils::HashString("MATTHEW");
        static const int MAXIM_HASH = HashingUtils::HashString("MAXIM");
        static const int MIA_HASH = HashingUtils::HashString("MIA");
        static const int MIGUEL_HASH = HashingUtils::HashString("MIGUEL");
        static const int MIZUKI_HASH = HashingUtils::HashString("MIZUKI");
        static const int NAJA_HASH = HashingUtils::HashString("NAJA");
        static const int NICOLE_HASH = HashingUtils::HashString("NICOLE");
        static const int PENELOPE_HASH = HashingUtils::HashString("PENELOPE");
        static const int RAVEENA_HASH = HashingUtils::HashString("RAVEENA");
        static const int RICARDO_HASH = HashingUtils::HashString("RICARDO");
        static const int RUBEN_HASH = HashingUtils::HashString("RUBEN");
        static const int RUSSELL_HASH = HashingUtils::HashString("RUSSELL");
        static const int SALLI_HASH = HashingUtils::HashString("SALLI");
        static const int SEOYEON_HASH = HashingUtils::HashString("SEOYEON");
        static const int TAKUMI_HASH = HashingUtils::HashString("TAKUMI");
        static const int TATYANA_HASH = HashingUtils::HashString("TATYANA");
        static const int VICKI_HASH = HashingUtils::HashString("VICKI");
        static const int VITORIA_HASH = HashingUtils::HashString("VITORIA");
        static const int ZEINA_HASH = HashingUtils::HashString("ZEINA");
        static const int ZHIYU_HASH = HashingUtils::HashString("ZHIYU");


        VoiceId GetVoiceIdForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMY_HASH)
          {
            return VoiceId::AMY;
          }
          else if (hashCode == ASTRID_HASH)
          {
            return VoiceId::ASTRID;
          }
          else if (hashCode == BIANCA_HASH)
          {
            return VoiceId::BIANCA;
          }
          else if (hashCode == BRIAN_HASH)
          {
            return VoiceId::BRIAN;
          }
          else if (hashCode == CAMILA_HASH)
          {
            return VoiceId::CAMILA;
          }
          else if (hashCode == CARLA_HASH)
          {
            return VoiceId::CARLA;
          }
          else if (hashCode == CARMEN_HASH)
          {
            return VoiceId::CARMEN;
          }
          else if (hashCode == CELINE_HASH)
          {
            return VoiceId::CELINE;
          }
          else if (hashCode == CHANTAL_HASH)
          {
            return VoiceId::CHANTAL;
          }
          else if (hashCode == CONCHITA_HASH)
          {
            return VoiceId::CONCHITA;
          }
          else if (hashCode == CRISTIANO_HASH)
          {
            return VoiceId::CRISTIANO;
          }
          else if (hashCode == DORA_HASH)
          {
            return VoiceId::DORA;
          }
          else if (hashCode == EMMA_HASH)
          {
            return VoiceId::EMMA;
          }
          else if (hashCode == ENRIQUE_HASH)
          {
            return VoiceId::ENRIQUE;
          }
          else if (hashCode == EWA_HASH)
          {
            return VoiceId::EWA;
          }
          else if (hashCode == FILIZ_HASH)
          {
            return VoiceId::FILIZ;
          }
          else if (hashCode == GERAINT_HASH)
          {
            return VoiceId::GERAINT;
          }
          else if (hashCode == GIORGIO_HASH)
          {
            return VoiceId::GIORGIO;
          }
          else if (hashCode == GWYNETH_HASH)
          {
            return VoiceId::GWYNETH;
          }
          else if (hashCode == HANS_HASH)
          {
            return VoiceId::HANS;
          }
          else if (hashCode == INES_HASH)
          {
            return VoiceId::INES;
          }
          else if (hashCode == IVY_HASH)
          {
            return VoiceId::IVY;
          }
          else if (hashCode == JACEK_HASH)
          {
            return VoiceId::JACEK;
          }
          else if (hashCode == JAN_HASH)
          {
            return VoiceId::JAN;
          }
          else if (hashCode == JOANNA_HASH)
          {
            return VoiceId::JOANNA;
          }
          else if (hashCode == JOEY_HASH)
          {
            return VoiceId::JOEY;
          }
          else if (hashCode == JUSTIN_HASH)
          {
            return VoiceId::JUSTIN;
          }
          else if (hashCode == KARL_HASH)
          {
            return VoiceId::KARL;
          }
          else if (hashCode == KENDRA_HASH)
          {
            return VoiceId::KENDRA;
          }
          else if (hashCode == KIMBERLY_HASH)
          {
            return VoiceId::KIMBERLY;
          }
          else if (hashCode == LEA_HASH)
          {
            return VoiceId::LEA;
          }
          else if (hashCode == LIV_HASH)
          {
            return VoiceId::LIV;
          }
          else if (hashCode == LOTTE_HASH)
          {
            return VoiceId::LOTTE;
          }
          else if (hashCode == LUCIA_HASH)
          {
            return VoiceId::LUCIA;
          }
          else if (hashCode == LUPE_HASH)
          {
            return VoiceId::LUPE;
          }
          else if (hashCode == MADS_HASH)
          {
            return VoiceId::MADS;
          }
          else if (hashCode == MAJA_HASH)
          {
            return VoiceId::MAJA;
          }
          else if (hashCode == MARLENE_HASH)
          {
            return VoiceId::MARLENE;
          }
          else if (hashCode == MATHIEU_HASH)
          {
            return VoiceId::MATHIEU;
          }
          else if (hashCode == MATTHEW_HASH)
          {
            return VoiceId::MATTHEW;
          }
          else if (hashCode == MAXIM_HASH)
          {
            return VoiceId::MAXIM;
          }
          else if (hashCode == MIA_HASH)
          {
            return VoiceId::MIA;
          }
          else if (hashCode == MIGUEL_HASH)
          {
            return VoiceId::MIGUEL;
          }
          else if (hashCode == MIZUKI_HASH)
          {
            return VoiceId::MIZUKI;
          }
          else if (hashCode == NAJA_HASH)
          {
            return VoiceId::NAJA;
          }
          else if (hashCode == NICOLE_HASH)
          {
            return VoiceId::NICOLE;
          }
          else if (hashCode == PENELOPE_HASH)
          {
            return VoiceId::PENELOPE;
          }
          else if (hashCode == RAVEENA_HASH)
          {
            return VoiceId::RAVEENA;
          }
          else if (hashCode == RICARDO_HASH)
          {
            return VoiceId::RICARDO;
          }
          else if (hashCode == RUBEN_HASH)
          {
            return VoiceId::RUBEN;
          }
          else if (hashCode == RUSSELL_HASH)
          {
            return VoiceId::RUSSELL;
          }
          else if (hashCode == SALLI_HASH)
          {
            return VoiceId::SALLI;
          }
          else if (hashCode == SEOYEON_HASH)
          {
            return VoiceId::SEOYEON;
          }
          else if (hashCode == TAKUMI_HASH)
          {
            return VoiceId::TAKUMI;
          }
          else if (hashCode == TATYANA_HASH)
          {
            return VoiceId::TATYANA;
          }
          else if (hashCode == VICKI_HASH)
          {
            return VoiceId::VICKI;
          }
          else if (hashCode == VITORIA_HASH)
          {
            return VoiceId::VITORIA;
          }
          else if (hashCode == ZEINA_HASH)
          {
            return VoiceId::ZEINA;
          }
          else if (hashCode == ZHIYU_HASH)
          {
            return VoiceId::ZHIYU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceId>(hashCode);
          }

          return VoiceId::NOT_SET;
        }

        Aws::String GetNameForVoiceId(VoiceId enumValue)
        {
          switch(enumValue)
          {
          case VoiceId::NOT_SET:
            return {};
          case VoiceId::AMY:
            return "AMY";
          case VoiceId::ASTRID:
            return "ASTRID";
          case VoiceId::BIANCA:
            return "BIANCA";
          case VoiceId::BRIAN:
            return "BRIAN";
          case VoiceId::CAMILA:
            return "CAMILA";
          case VoiceId::CARLA:
            return "CARLA";
          case VoiceId::CARMEN:
            return "CARMEN";
          case VoiceId::CELINE:
            return "CELINE";
          case VoiceId::CHANTAL:
            return "CHANTAL";
          case VoiceId::CONCHITA:
            return "CONCHITA";
          case VoiceId::CRISTIANO:
            return "CRISTIANO";
          case VoiceId::DORA:
            return "DORA";
          case VoiceId::EMMA:
            return "EMMA";
          case VoiceId::ENRIQUE:
            return "ENRIQUE";
          case VoiceId::EWA:
            return "EWA";
          case VoiceId::FILIZ:
            return "FILIZ";
          case VoiceId::GERAINT:
            return "GERAINT";
          case VoiceId::GIORGIO:
            return "GIORGIO";
          case VoiceId::GWYNETH:
            return "GWYNETH";
          case VoiceId::HANS:
            return "HANS";
          case VoiceId::INES:
            return "INES";
          case VoiceId::IVY:
            return "IVY";
          case VoiceId::JACEK:
            return "JACEK";
          case VoiceId::JAN:
            return "JAN";
          case VoiceId::JOANNA:
            return "JOANNA";
          case VoiceId::JOEY:
            return "JOEY";
          case VoiceId::JUSTIN:
            return "JUSTIN";
          case VoiceId::KARL:
            return "KARL";
          case VoiceId::KENDRA:
            return "KENDRA";
          case VoiceId::KIMBERLY:
            return "KIMBERLY";
          case VoiceId::LEA:
            return "LEA";
          case VoiceId::LIV:
            return "LIV";
          case VoiceId::LOTTE:
            return "LOTTE";
          case VoiceId::LUCIA:
            return "LUCIA";
          case VoiceId::LUPE:
            return "LUPE";
          case VoiceId::MADS:
            return "MADS";
          case VoiceId::MAJA:
            return "MAJA";
          case VoiceId::MARLENE:
            return "MARLENE";
          case VoiceId::MATHIEU:
            return "MATHIEU";
          case VoiceId::MATTHEW:
            return "MATTHEW";
          case VoiceId::MAXIM:
            return "MAXIM";
          case VoiceId::MIA:
            return "MIA";
          case VoiceId::MIGUEL:
            return "MIGUEL";
          case VoiceId::MIZUKI:
            return "MIZUKI";
          case VoiceId::NAJA:
            return "NAJA";
          case VoiceId::NICOLE:
            return "NICOLE";
          case VoiceId::PENELOPE:
            return "PENELOPE";
          case VoiceId::RAVEENA:
            return "RAVEENA";
          case VoiceId::RICARDO:
            return "RICARDO";
          case VoiceId::RUBEN:
            return "RUBEN";
          case VoiceId::RUSSELL:
            return "RUSSELL";
          case VoiceId::SALLI:
            return "SALLI";
          case VoiceId::SEOYEON:
            return "SEOYEON";
          case VoiceId::TAKUMI:
            return "TAKUMI";
          case VoiceId::TATYANA:
            return "TATYANA";
          case VoiceId::VICKI:
            return "VICKI";
          case VoiceId::VITORIA:
            return "VITORIA";
          case VoiceId::ZEINA:
            return "ZEINA";
          case VoiceId::ZHIYU:
            return "ZHIYU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceIdMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
