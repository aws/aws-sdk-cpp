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

        static constexpr uint32_t AMY_HASH = ConstExprHashingUtils::HashString("AMY");
        static constexpr uint32_t ASTRID_HASH = ConstExprHashingUtils::HashString("ASTRID");
        static constexpr uint32_t BIANCA_HASH = ConstExprHashingUtils::HashString("BIANCA");
        static constexpr uint32_t BRIAN_HASH = ConstExprHashingUtils::HashString("BRIAN");
        static constexpr uint32_t CAMILA_HASH = ConstExprHashingUtils::HashString("CAMILA");
        static constexpr uint32_t CARLA_HASH = ConstExprHashingUtils::HashString("CARLA");
        static constexpr uint32_t CARMEN_HASH = ConstExprHashingUtils::HashString("CARMEN");
        static constexpr uint32_t CELINE_HASH = ConstExprHashingUtils::HashString("CELINE");
        static constexpr uint32_t CHANTAL_HASH = ConstExprHashingUtils::HashString("CHANTAL");
        static constexpr uint32_t CONCHITA_HASH = ConstExprHashingUtils::HashString("CONCHITA");
        static constexpr uint32_t CRISTIANO_HASH = ConstExprHashingUtils::HashString("CRISTIANO");
        static constexpr uint32_t DORA_HASH = ConstExprHashingUtils::HashString("DORA");
        static constexpr uint32_t EMMA_HASH = ConstExprHashingUtils::HashString("EMMA");
        static constexpr uint32_t ENRIQUE_HASH = ConstExprHashingUtils::HashString("ENRIQUE");
        static constexpr uint32_t EWA_HASH = ConstExprHashingUtils::HashString("EWA");
        static constexpr uint32_t FILIZ_HASH = ConstExprHashingUtils::HashString("FILIZ");
        static constexpr uint32_t GERAINT_HASH = ConstExprHashingUtils::HashString("GERAINT");
        static constexpr uint32_t GIORGIO_HASH = ConstExprHashingUtils::HashString("GIORGIO");
        static constexpr uint32_t GWYNETH_HASH = ConstExprHashingUtils::HashString("GWYNETH");
        static constexpr uint32_t HANS_HASH = ConstExprHashingUtils::HashString("HANS");
        static constexpr uint32_t INES_HASH = ConstExprHashingUtils::HashString("INES");
        static constexpr uint32_t IVY_HASH = ConstExprHashingUtils::HashString("IVY");
        static constexpr uint32_t JACEK_HASH = ConstExprHashingUtils::HashString("JACEK");
        static constexpr uint32_t JAN_HASH = ConstExprHashingUtils::HashString("JAN");
        static constexpr uint32_t JOANNA_HASH = ConstExprHashingUtils::HashString("JOANNA");
        static constexpr uint32_t JOEY_HASH = ConstExprHashingUtils::HashString("JOEY");
        static constexpr uint32_t JUSTIN_HASH = ConstExprHashingUtils::HashString("JUSTIN");
        static constexpr uint32_t KARL_HASH = ConstExprHashingUtils::HashString("KARL");
        static constexpr uint32_t KENDRA_HASH = ConstExprHashingUtils::HashString("KENDRA");
        static constexpr uint32_t KIMBERLY_HASH = ConstExprHashingUtils::HashString("KIMBERLY");
        static constexpr uint32_t LEA_HASH = ConstExprHashingUtils::HashString("LEA");
        static constexpr uint32_t LIV_HASH = ConstExprHashingUtils::HashString("LIV");
        static constexpr uint32_t LOTTE_HASH = ConstExprHashingUtils::HashString("LOTTE");
        static constexpr uint32_t LUCIA_HASH = ConstExprHashingUtils::HashString("LUCIA");
        static constexpr uint32_t LUPE_HASH = ConstExprHashingUtils::HashString("LUPE");
        static constexpr uint32_t MADS_HASH = ConstExprHashingUtils::HashString("MADS");
        static constexpr uint32_t MAJA_HASH = ConstExprHashingUtils::HashString("MAJA");
        static constexpr uint32_t MARLENE_HASH = ConstExprHashingUtils::HashString("MARLENE");
        static constexpr uint32_t MATHIEU_HASH = ConstExprHashingUtils::HashString("MATHIEU");
        static constexpr uint32_t MATTHEW_HASH = ConstExprHashingUtils::HashString("MATTHEW");
        static constexpr uint32_t MAXIM_HASH = ConstExprHashingUtils::HashString("MAXIM");
        static constexpr uint32_t MIA_HASH = ConstExprHashingUtils::HashString("MIA");
        static constexpr uint32_t MIGUEL_HASH = ConstExprHashingUtils::HashString("MIGUEL");
        static constexpr uint32_t MIZUKI_HASH = ConstExprHashingUtils::HashString("MIZUKI");
        static constexpr uint32_t NAJA_HASH = ConstExprHashingUtils::HashString("NAJA");
        static constexpr uint32_t NICOLE_HASH = ConstExprHashingUtils::HashString("NICOLE");
        static constexpr uint32_t PENELOPE_HASH = ConstExprHashingUtils::HashString("PENELOPE");
        static constexpr uint32_t RAVEENA_HASH = ConstExprHashingUtils::HashString("RAVEENA");
        static constexpr uint32_t RICARDO_HASH = ConstExprHashingUtils::HashString("RICARDO");
        static constexpr uint32_t RUBEN_HASH = ConstExprHashingUtils::HashString("RUBEN");
        static constexpr uint32_t RUSSELL_HASH = ConstExprHashingUtils::HashString("RUSSELL");
        static constexpr uint32_t SALLI_HASH = ConstExprHashingUtils::HashString("SALLI");
        static constexpr uint32_t SEOYEON_HASH = ConstExprHashingUtils::HashString("SEOYEON");
        static constexpr uint32_t TAKUMI_HASH = ConstExprHashingUtils::HashString("TAKUMI");
        static constexpr uint32_t TATYANA_HASH = ConstExprHashingUtils::HashString("TATYANA");
        static constexpr uint32_t VICKI_HASH = ConstExprHashingUtils::HashString("VICKI");
        static constexpr uint32_t VITORIA_HASH = ConstExprHashingUtils::HashString("VITORIA");
        static constexpr uint32_t ZEINA_HASH = ConstExprHashingUtils::HashString("ZEINA");
        static constexpr uint32_t ZHIYU_HASH = ConstExprHashingUtils::HashString("ZHIYU");


        VoiceId GetVoiceIdForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
