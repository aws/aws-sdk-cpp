/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>You've exceeded the number of tags allowed for a resource. See the <a
   * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits.html"> Limits
   * Topic</a> in the Step Functions Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TooManyTags">AWS
   * API Reference</a></p>
   */
  class TooManyTags
  {
  public:
    AWS_SFN_API TooManyTags();
    AWS_SFN_API TooManyTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API TooManyTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TooManyTags& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TooManyTags& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TooManyTags& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    
    inline TooManyTags& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    
    inline TooManyTags& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    
    inline TooManyTags& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
