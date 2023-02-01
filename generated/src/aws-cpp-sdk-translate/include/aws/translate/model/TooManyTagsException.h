/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>You have added too many tags to this resource. The maximum is 50
   * tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TooManyTagsException">AWS
   * API Reference</a></p>
   */
  class TooManyTagsException
  {
  public:
    AWS_TRANSLATE_API TooManyTagsException();
    AWS_TRANSLATE_API TooManyTagsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TooManyTagsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TooManyTagsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TooManyTagsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TooManyTagsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    
    inline TooManyTagsException& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    
    inline TooManyTagsException& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    
    inline TooManyTagsException& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
