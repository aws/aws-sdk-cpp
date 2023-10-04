/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>A location at which a zero-duration ad marker was detected in a VOD source
   * manifest.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AdBreakOpportunity">AWS
   * API Reference</a></p>
   */
  class AdBreakOpportunity
  {
  public:
    AWS_MEDIATAILOR_API AdBreakOpportunity();
    AWS_MEDIATAILOR_API AdBreakOpportunity(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AdBreakOpportunity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The offset in milliseconds from the start of the VOD source at which an ad
     * marker was detected.</p>
     */
    inline long long GetOffsetMillis() const{ return m_offsetMillis; }

    /**
     * <p>The offset in milliseconds from the start of the VOD source at which an ad
     * marker was detected.</p>
     */
    inline bool OffsetMillisHasBeenSet() const { return m_offsetMillisHasBeenSet; }

    /**
     * <p>The offset in milliseconds from the start of the VOD source at which an ad
     * marker was detected.</p>
     */
    inline void SetOffsetMillis(long long value) { m_offsetMillisHasBeenSet = true; m_offsetMillis = value; }

    /**
     * <p>The offset in milliseconds from the start of the VOD source at which an ad
     * marker was detected.</p>
     */
    inline AdBreakOpportunity& WithOffsetMillis(long long value) { SetOffsetMillis(value); return *this;}

  private:

    long long m_offsetMillis;
    bool m_offsetMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
