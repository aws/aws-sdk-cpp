/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/Status.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactParameter.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class DescribeProvisioningArtifactResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeProvisioningArtifactResult();
    AWS_SERVICECATALOG_API DescribeProvisioningArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProvisioningArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline const ProvisioningArtifactDetail& GetProvisioningArtifactDetail() const{ return m_provisioningArtifactDetail; }

    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactDetail(const ProvisioningArtifactDetail& value) { m_provisioningArtifactDetail = value; }

    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactDetail(ProvisioningArtifactDetail&& value) { m_provisioningArtifactDetail = std::move(value); }

    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& WithProvisioningArtifactDetail(const ProvisioningArtifactDetail& value) { SetProvisioningArtifactDetail(value); return *this;}

    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& WithProvisioningArtifactDetail(ProvisioningArtifactDetail&& value) { SetProvisioningArtifactDetail(std::move(value)); return *this;}


    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInfo() const{ return m_info; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline void SetInfo(const Aws::Map<Aws::String, Aws::String>& value) { m_info = value; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline void SetInfo(Aws::Map<Aws::String, Aws::String>&& value) { m_info = std::move(value); }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline DescribeProvisioningArtifactResult& WithInfo(const Aws::Map<Aws::String, Aws::String>& value) { SetInfo(value); return *this;}

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline DescribeProvisioningArtifactResult& WithInfo(Aws::Map<Aws::String, Aws::String>&& value) { SetInfo(std::move(value)); return *this;}

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(const Aws::String& key, const Aws::String& value) { m_info.emplace(key, value); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(Aws::String&& key, const Aws::String& value) { m_info.emplace(std::move(key), value); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(const Aws::String& key, Aws::String&& value) { m_info.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(Aws::String&& key, Aws::String&& value) { m_info.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(const char* key, Aws::String&& value) { m_info.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(Aws::String&& key, const char* value) { m_info.emplace(std::move(key), value); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(const char* key, const char* value) { m_info.emplace(key, value); return *this; }


    /**
     * <p>The status of the current request.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the current request.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The status of the current request.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the current request.</p>
     */
    inline DescribeProvisioningArtifactResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the current request.</p>
     */
    inline DescribeProvisioningArtifactResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Information about the parameters used to provision the product. </p>
     */
    inline const Aws::Vector<ProvisioningArtifactParameter>& GetProvisioningArtifactParameters() const{ return m_provisioningArtifactParameters; }

    /**
     * <p>Information about the parameters used to provision the product. </p>
     */
    inline void SetProvisioningArtifactParameters(const Aws::Vector<ProvisioningArtifactParameter>& value) { m_provisioningArtifactParameters = value; }

    /**
     * <p>Information about the parameters used to provision the product. </p>
     */
    inline void SetProvisioningArtifactParameters(Aws::Vector<ProvisioningArtifactParameter>&& value) { m_provisioningArtifactParameters = std::move(value); }

    /**
     * <p>Information about the parameters used to provision the product. </p>
     */
    inline DescribeProvisioningArtifactResult& WithProvisioningArtifactParameters(const Aws::Vector<ProvisioningArtifactParameter>& value) { SetProvisioningArtifactParameters(value); return *this;}

    /**
     * <p>Information about the parameters used to provision the product. </p>
     */
    inline DescribeProvisioningArtifactResult& WithProvisioningArtifactParameters(Aws::Vector<ProvisioningArtifactParameter>&& value) { SetProvisioningArtifactParameters(std::move(value)); return *this;}

    /**
     * <p>Information about the parameters used to provision the product. </p>
     */
    inline DescribeProvisioningArtifactResult& AddProvisioningArtifactParameters(const ProvisioningArtifactParameter& value) { m_provisioningArtifactParameters.push_back(value); return *this; }

    /**
     * <p>Information about the parameters used to provision the product. </p>
     */
    inline DescribeProvisioningArtifactResult& AddProvisioningArtifactParameters(ProvisioningArtifactParameter&& value) { m_provisioningArtifactParameters.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeProvisioningArtifactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeProvisioningArtifactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeProvisioningArtifactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProvisioningArtifactDetail m_provisioningArtifactDetail;

    Aws::Map<Aws::String, Aws::String> m_info;

    Status m_status;

    Aws::Vector<ProvisioningArtifactParameter> m_provisioningArtifactParameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
