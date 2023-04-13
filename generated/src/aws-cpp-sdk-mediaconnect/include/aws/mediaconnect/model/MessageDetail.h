/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  class MessageDetail
  {
  public:
    AWS_MEDIACONNECT_API MessageDetail();
    AWS_MEDIACONNECT_API MessageDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MessageDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The error code.
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * The error code.
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * The error code.
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * The error code.
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * The error code.
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * The error code.
     */
    inline MessageDetail& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * The error code.
     */
    inline MessageDetail& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * The error code.
     */
    inline MessageDetail& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * The specific error message that MediaConnect returns to help you understand the
     * reason that the request did not succeed.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * The specific error message that MediaConnect returns to help you understand the
     * reason that the request did not succeed.
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * The specific error message that MediaConnect returns to help you understand the
     * reason that the request did not succeed.
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * The specific error message that MediaConnect returns to help you understand the
     * reason that the request did not succeed.
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * The specific error message that MediaConnect returns to help you understand the
     * reason that the request did not succeed.
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * The specific error message that MediaConnect returns to help you understand the
     * reason that the request did not succeed.
     */
    inline MessageDetail& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * The specific error message that MediaConnect returns to help you understand the
     * reason that the request did not succeed.
     */
    inline MessageDetail& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * The specific error message that MediaConnect returns to help you understand the
     * reason that the request did not succeed.
     */
    inline MessageDetail& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * The name of the resource.
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * The name of the resource.
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * The name of the resource.
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * The name of the resource.
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * The name of the resource.
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * The name of the resource.
     */
    inline MessageDetail& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * The name of the resource.
     */
    inline MessageDetail& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * The name of the resource.
     */
    inline MessageDetail& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
