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

        static const int csv_HASH = HashingUtils::HashString("csv");
        static const int opencypher_HASH = HashingUtils::HashString("opencypher");
        static const int ntriples_HASH = HashingUtils::HashString("ntriples");
        static const int nquads_HASH = HashingUtils::HashString("nquads");
        static const int rdfxml_HASH = HashingUtils::HashString("rdfxml");
        static const int turtle_HASH = HashingUtils::HashString("turtle");


        Format GetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
