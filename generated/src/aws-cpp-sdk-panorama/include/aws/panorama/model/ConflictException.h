/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/ConflictExceptionErrorArgument.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>The target resource is in use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_PANORAMA_API ConflictException();
    AWS_PANORAMA_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline const Aws::Vector<ConflictExceptionErrorArgument>& GetErrorArguments() const{ return m_errorArguments; }
    inline bool ErrorArgumentsHasBeenSet() const { return m_errorArgumentsHasBeenSet; }
    inline void SetErrorArguments(const Aws::Vector<ConflictExceptionErrorArgument>& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments = value; }
    inline void SetErrorArguments(Aws::Vector<ConflictExceptionErrorArgument>&& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments = std::move(value); }
    inline ConflictException& WithErrorArguments(const Aws::Vector<ConflictExceptionErrorArgument>& value) { SetErrorArguments(value); return *this;}
    inline ConflictException& WithErrorArguments(Aws::Vector<ConflictExceptionErrorArgument>&& value) { SetErrorArguments(std::move(value)); return *this;}
    inline ConflictException& AddErrorArguments(const ConflictExceptionErrorArgument& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments.push_back(value); return *this; }
    inline ConflictException& AddErrorArguments(ConflictExceptionErrorArgument&& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique ID for the error.</p>
     */
    inline const Aws::String& GetErrorId() const{ return m_errorId; }
    inline bool ErrorIdHasBeenSet() const { return m_errorIdHasBeenSet; }
    inline void SetErrorId(const Aws::String& value) { m_errorIdHasBeenSet = true; m_errorId = value; }
    inline void SetErrorId(Aws::String&& value) { m_errorIdHasBeenSet = true; m_errorId = std::move(value); }
    inline void SetErrorId(const char* value) { m_errorIdHasBeenSet = true; m_errorId.assign(value); }
    inline ConflictException& WithErrorId(const Aws::String& value) { SetErrorId(value); return *this;}
    inline ConflictException& WithErrorId(Aws::String&& value) { SetErrorId(std::move(value)); return *this;}
    inline ConflictException& WithErrorId(const char* value) { SetErrorId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource's ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ConflictException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ConflictException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ConflictException& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource's type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ConflictException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ConflictException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ConflictException& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConflictExceptionErrorArgument> m_errorArguments;
    bool m_errorArgumentsHasBeenSet = false;

    Aws::String m_errorId;
    bool m_errorIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
