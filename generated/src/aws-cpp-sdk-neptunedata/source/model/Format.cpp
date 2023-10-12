/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/Format.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace neptunedata
  {
    namespace Model
    {
      namespace FormatMapper
      {

        static constexpr uint32_t csv_HASH = ConstExprHashingUtils::HashString("csv");
        static constexpr uint32_t opencypher_HASH = ConstExprHashingUtils::HashString("opencypher");
        static constexpr uint32_t ntriples_HASH = ConstExprHashingUtils::HashString("ntriples");
        static constexpr uint32_t nquads_HASH = ConstExprHashingUtils::HashString("nquads");
        static constexpr uint32_t rdfxml_HASH = ConstExprHashingUtils::HashString("rdfxml");
        static constexpr uint32_t turtle_HASH = ConstExprHashingUtils::HashString("turtle");


        Format GetFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == csv_HASH)
          {
            return Format::csv;
          }
          else if (hashCode == opencypher_HASH)
          {
            return Format::opencypher;
          }
          else if (hashCode == ntriples_HASH)
          {
            return Format::ntriples;
          }
          else if (hashCode == nquads_HASH)
          {
            return Format::nquads;
          }
          else if (hashCode == rdfxml_HASH)
          {
            return Format::rdfxml;
          }
          else if (hashCode == turtle_HASH)
          {
            return Format::turtle;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Format>(hashCode);
          }

          return Format::NOT_SET;
        }

        Aws::String GetNameForFormat(Format enumValue)
        {
          switch(enumValue)
          {
          case Format::NOT_SET:
            return {};
          case Format::csv:
            return "csv";
          case Format::opencypher:
            return "opencypher";
          case Format::ntriples:
            return "ntriples";
          case Format::nquads:
            return "nquads";
          case Format::rdfxml:
            return "rdfxml";
          case Format::turtle:
            return "turtle";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormatMapper
    } // namespace Model
  } // namespace neptunedata
} // namespace Aws
