/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/LifecyclePolicyType.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Error information for an OpenSearch Serverless request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/EffectiveLifecyclePolicyErrorDetail">AWS
   * API Reference</a></p>
   */
  class EffectiveLifecyclePolicyErrorDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API EffectiveLifecyclePolicyErrorDetail();
    AWS_OPENSEARCHSERVERLESS_API EffectiveLifecyclePolicyErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API EffectiveLifecyclePolicyErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code for the request.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code for the request.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code for the request.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code for the request.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code for the request.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code for the request.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code for the request.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code for the request.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>A description of the error. For example, <code>The specified Index resource
     * is not found</code>.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A description of the error. For example, <code>The specified Index resource
     * is not found</code>.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A description of the error. For example, <code>The specified Index resource
     * is not found</code>.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A description of the error. For example, <code>The specified Index resource
     * is not found</code>.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A description of the error. For example, <code>The specified Index resource
     * is not found</code>.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A description of the error. For example, <code>The specified Index resource
     * is not found</code>.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A description of the error. For example, <code>The specified Index resource
     * is not found</code>.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the error. For example, <code>The specified Index resource
     * is not found</code>.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The name of OpenSearch Serverless index resource.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The name of OpenSearch Serverless index resource.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The name of OpenSearch Serverless index resource.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The name of OpenSearch Serverless index resource.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The name of OpenSearch Serverless index resource.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The name of OpenSearch Serverless index resource.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The name of OpenSearch Serverless index resource.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The name of OpenSearch Serverless index resource.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline const LifecyclePolicyType& GetType() const{ return m_type; }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline void SetType(const LifecyclePolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline void SetType(LifecyclePolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithType(const LifecyclePolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline EffectiveLifecyclePolicyErrorDetail& WithType(LifecyclePolicyType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    LifecyclePolicyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
