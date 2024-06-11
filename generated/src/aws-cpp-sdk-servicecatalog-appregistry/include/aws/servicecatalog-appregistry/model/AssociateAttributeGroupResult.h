﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppRegistry
{
namespace Model
{
  class AssociateAttributeGroupResult
  {
  public:
    AWS_APPREGISTRY_API AssociateAttributeGroupResult();
    AWS_APPREGISTRY_API AssociateAttributeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API AssociateAttributeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }
    inline AssociateAttributeGroupResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline AssociateAttributeGroupResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline AssociateAttributeGroupResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the attribute group that contains the
     * application's new attributes.</p>
     */
    inline const Aws::String& GetAttributeGroupArn() const{ return m_attributeGroupArn; }
    inline void SetAttributeGroupArn(const Aws::String& value) { m_attributeGroupArn = value; }
    inline void SetAttributeGroupArn(Aws::String&& value) { m_attributeGroupArn = std::move(value); }
    inline void SetAttributeGroupArn(const char* value) { m_attributeGroupArn.assign(value); }
    inline AssociateAttributeGroupResult& WithAttributeGroupArn(const Aws::String& value) { SetAttributeGroupArn(value); return *this;}
    inline AssociateAttributeGroupResult& WithAttributeGroupArn(Aws::String&& value) { SetAttributeGroupArn(std::move(value)); return *this;}
    inline AssociateAttributeGroupResult& WithAttributeGroupArn(const char* value) { SetAttributeGroupArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateAttributeGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateAttributeGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateAttributeGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;

    Aws::String m_attributeGroupArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
