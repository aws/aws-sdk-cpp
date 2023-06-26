/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Error details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ErrorDetails">AWS
   * API Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_MGN_API ErrorDetails();
    AWS_MGN_API ErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error details code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>Error details code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>Error details code.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Error details code.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Error details code.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>Error details code.</p>
     */
    inline ErrorDetails& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>Error details code.</p>
     */
    inline ErrorDetails& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>Error details code.</p>
     */
    inline ErrorDetails& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Error details message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Error details message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Error details message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Error details message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Error details message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Error details message.</p>
     */
    inline ErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Error details message.</p>
     */
    inline ErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Error details message.</p>
     */
    inline ErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Error details resourceId.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Error details resourceId.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Error details resourceId.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Error details resourceId.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Error details resourceId.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Error details resourceId.</p>
     */
    inline ErrorDetails& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Error details resourceId.</p>
     */
    inline ErrorDetails& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Error details resourceId.</p>
     */
    inline ErrorDetails& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Error details resourceType.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Error details resourceType.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Error details resourceType.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Error details resourceType.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Error details resourceType.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Error details resourceType.</p>
     */
    inline ErrorDetails& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Error details resourceType.</p>
     */
    inline ErrorDetails& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Error details resourceType.</p>
     */
    inline ErrorDetails& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
