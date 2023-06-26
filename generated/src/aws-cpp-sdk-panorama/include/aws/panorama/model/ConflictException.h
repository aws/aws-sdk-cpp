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


    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline const Aws::Vector<ConflictExceptionErrorArgument>& GetErrorArguments() const{ return m_errorArguments; }

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline bool ErrorArgumentsHasBeenSet() const { return m_errorArgumentsHasBeenSet; }

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline void SetErrorArguments(const Aws::Vector<ConflictExceptionErrorArgument>& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments = value; }

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline void SetErrorArguments(Aws::Vector<ConflictExceptionErrorArgument>&& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments = std::move(value); }

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline ConflictException& WithErrorArguments(const Aws::Vector<ConflictExceptionErrorArgument>& value) { SetErrorArguments(value); return *this;}

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline ConflictException& WithErrorArguments(Aws::Vector<ConflictExceptionErrorArgument>&& value) { SetErrorArguments(std::move(value)); return *this;}

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline ConflictException& AddErrorArguments(const ConflictExceptionErrorArgument& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments.push_back(value); return *this; }

    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline ConflictException& AddErrorArguments(ConflictExceptionErrorArgument&& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique ID for the error.</p>
     */
    inline const Aws::String& GetErrorId() const{ return m_errorId; }

    /**
     * <p>A unique ID for the error.</p>
     */
    inline bool ErrorIdHasBeenSet() const { return m_errorIdHasBeenSet; }

    /**
     * <p>A unique ID for the error.</p>
     */
    inline void SetErrorId(const Aws::String& value) { m_errorIdHasBeenSet = true; m_errorId = value; }

    /**
     * <p>A unique ID for the error.</p>
     */
    inline void SetErrorId(Aws::String&& value) { m_errorIdHasBeenSet = true; m_errorId = std::move(value); }

    /**
     * <p>A unique ID for the error.</p>
     */
    inline void SetErrorId(const char* value) { m_errorIdHasBeenSet = true; m_errorId.assign(value); }

    /**
     * <p>A unique ID for the error.</p>
     */
    inline ConflictException& WithErrorId(const Aws::String& value) { SetErrorId(value); return *this;}

    /**
     * <p>A unique ID for the error.</p>
     */
    inline ConflictException& WithErrorId(Aws::String&& value) { SetErrorId(std::move(value)); return *this;}

    /**
     * <p>A unique ID for the error.</p>
     */
    inline ConflictException& WithErrorId(const char* value) { SetErrorId(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The resource's ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource's ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource's ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource's ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource's ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource's ID.</p>
     */
    inline ConflictException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource's ID.</p>
     */
    inline ConflictException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource's ID.</p>
     */
    inline ConflictException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The resource's type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource's type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource's type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource's type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource's type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource's type.</p>
     */
    inline ConflictException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource's type.</p>
     */
    inline ConflictException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource's type.</p>
     */
    inline ConflictException& WithResourceType(const char* value) { SetResourceType(value); return *this;}

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
