/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>WAF couldn’t perform the operation because you exceeded your resource limit.
   * For example, the maximum number of <code>WebACL</code> objects that you can
   * create for an Amazon Web Services account. For more information, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
   * quotas</a> in the <i>WAF Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/WAFLimitsExceededException">AWS
   * API Reference</a></p>
   */
  class WAFLimitsExceededException
  {
  public:
    AWS_WAFV2_API WAFLimitsExceededException();
    AWS_WAFV2_API WAFLimitsExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API WAFLimitsExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline WAFLimitsExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline WAFLimitsExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline WAFLimitsExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Source type for the exception. </p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>Source type for the exception. </p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>Source type for the exception. </p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>Source type for the exception. </p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>Source type for the exception. </p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>Source type for the exception. </p>
     */
    inline WAFLimitsExceededException& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>Source type for the exception. </p>
     */
    inline WAFLimitsExceededException& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>Source type for the exception. </p>
     */
    inline WAFLimitsExceededException& WithSourceType(const char* value) { SetSourceType(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
