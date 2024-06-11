﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/CidrCollection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  class CreateCidrCollectionResult
  {
  public:
    AWS_ROUTE53_API CreateCidrCollectionResult();
    AWS_ROUTE53_API CreateCidrCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateCidrCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains information about the CIDR collection.</p>
     */
    inline const CidrCollection& GetCollection() const{ return m_collection; }
    inline void SetCollection(const CidrCollection& value) { m_collection = value; }
    inline void SetCollection(CidrCollection&& value) { m_collection = std::move(value); }
    inline CreateCidrCollectionResult& WithCollection(const CidrCollection& value) { SetCollection(value); return *this;}
    inline CreateCidrCollectionResult& WithCollection(CidrCollection&& value) { SetCollection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique URL that represents the location for the CIDR collection.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline CreateCidrCollectionResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreateCidrCollectionResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreateCidrCollectionResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCidrCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCidrCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCidrCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CidrCollection m_collection;

    Aws::String m_location;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
