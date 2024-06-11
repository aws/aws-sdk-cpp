/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/SegmentActionServiceInsertion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace SegmentActionServiceInsertionMapper
      {

        static const int send_via_HASH = HashingUtils::HashString("send-via");
        static const int send_to_HASH = HashingUtils::HashString("send-to");


        SegmentActionServiceInsertion GetSegmentActionServiceInsertionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == send_via_HASH)
          {
            return SegmentActionServiceInsertion::send_via;
          }
          else if (hashCode == send_to_HASH)
          {
            return SegmentActionServiceInsertion::send_to;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SegmentActionServiceInsertion>(hashCode);
          }

          return SegmentActionServiceInsertion::NOT_SET;
        }

        Aws::String GetNameForSegmentActionServiceInsertion(SegmentActionServiceInsertion enumValue)
        {
          switch(enumValue)
          {
          case SegmentActionServiceInsertion::NOT_SET:
            return {};
          case SegmentActionServiceInsertion::send_via:
            return "send-via";
          case SegmentActionServiceInsertion::send_to:
            return "send-to";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SegmentActionServiceInsertionMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
