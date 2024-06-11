﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareAssociation.h>
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
namespace RAM
{
namespace Model
{
  class AssociateResourceShareResult
  {
  public:
    AWS_RAM_API AssociateResourceShareResult();
    AWS_RAM_API AssociateResourceShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API AssociateResourceShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that contain information about the associations.</p>
     */
    inline const Aws::Vector<ResourceShareAssociation>& GetResourceShareAssociations() const{ return m_resourceShareAssociations; }
    inline void SetResourceShareAssociations(const Aws::Vector<ResourceShareAssociation>& value) { m_resourceShareAssociations = value; }
    inline void SetResourceShareAssociations(Aws::Vector<ResourceShareAssociation>&& value) { m_resourceShareAssociations = std::move(value); }
    inline AssociateResourceShareResult& WithResourceShareAssociations(const Aws::Vector<ResourceShareAssociation>& value) { SetResourceShareAssociations(value); return *this;}
    inline AssociateResourceShareResult& WithResourceShareAssociations(Aws::Vector<ResourceShareAssociation>&& value) { SetResourceShareAssociations(std::move(value)); return *this;}
    inline AssociateResourceShareResult& AddResourceShareAssociations(const ResourceShareAssociation& value) { m_resourceShareAssociations.push_back(value); return *this; }
    inline AssociateResourceShareResult& AddResourceShareAssociations(ResourceShareAssociation&& value) { m_resourceShareAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline AssociateResourceShareResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AssociateResourceShareResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AssociateResourceShareResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateResourceShareResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateResourceShareResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateResourceShareResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceShareAssociation> m_resourceShareAssociations;

    Aws::String m_clientToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
