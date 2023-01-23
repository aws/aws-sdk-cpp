/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/NetworkOrigin.h>
#include <aws/s3control/model/VpcConfiguration.h>
#include <aws/s3control/model/PublicAccessBlockConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace S3Control
{
namespace Model
{
  class GetAccessPointResult
  {
  public:
    AWS_S3CONTROL_API GetAccessPointResult();
    AWS_S3CONTROL_API GetAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the specified access point.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the specified access point.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the specified access point.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the specified access point.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the specified access point.</p>
     */
    inline GetAccessPointResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the specified access point.</p>
     */
    inline GetAccessPointResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the specified access point.</p>
     */
    inline GetAccessPointResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the bucket associated with the specified access point.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the bucket associated with the specified access point.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucket = value; }

    /**
     * <p>The name of the bucket associated with the specified access point.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucket = std::move(value); }

    /**
     * <p>The name of the bucket associated with the specified access point.</p>
     */
    inline void SetBucket(const char* value) { m_bucket.assign(value); }

    /**
     * <p>The name of the bucket associated with the specified access point.</p>
     */
    inline GetAccessPointResult& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the bucket associated with the specified access point.</p>
     */
    inline GetAccessPointResult& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket associated with the specified access point.</p>
     */
    inline GetAccessPointResult& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p> <p>This
     * will always be true for an Amazon S3 on Outposts access point</p>
     */
    inline const NetworkOrigin& GetNetworkOrigin() const{ return m_networkOrigin; }

    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p> <p>This
     * will always be true for an Amazon S3 on Outposts access point</p>
     */
    inline void SetNetworkOrigin(const NetworkOrigin& value) { m_networkOrigin = value; }

    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p> <p>This
     * will always be true for an Amazon S3 on Outposts access point</p>
     */
    inline void SetNetworkOrigin(NetworkOrigin&& value) { m_networkOrigin = std::move(value); }

    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p> <p>This
     * will always be true for an Amazon S3 on Outposts access point</p>
     */
    inline GetAccessPointResult& WithNetworkOrigin(const NetworkOrigin& value) { SetNetworkOrigin(value); return *this;}

    /**
     * <p>Indicates whether this access point allows access from the public internet.
     * If <code>VpcConfiguration</code> is specified for this access point, then
     * <code>NetworkOrigin</code> is <code>VPC</code>, and the access point doesn't
     * allow access from the public internet. Otherwise, <code>NetworkOrigin</code> is
     * <code>Internet</code>, and the access point allows access from the public
     * internet, subject to the access point and bucket access policies.</p> <p>This
     * will always be true for an Amazon S3 on Outposts access point</p>
     */
    inline GetAccessPointResult& WithNetworkOrigin(NetworkOrigin&& value) { SetNetworkOrigin(std::move(value)); return *this;}


    /**
     * <p>Contains the virtual private cloud (VPC) configuration for the specified
     * access point.</p>  <p>This element is empty if this access point is an
     * Amazon S3 on Outposts access point that is used by other Amazon Web
     * Services.</p> 
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Contains the virtual private cloud (VPC) configuration for the specified
     * access point.</p>  <p>This element is empty if this access point is an
     * Amazon S3 on Outposts access point that is used by other Amazon Web
     * Services.</p> 
     */
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfiguration = value; }

    /**
     * <p>Contains the virtual private cloud (VPC) configuration for the specified
     * access point.</p>  <p>This element is empty if this access point is an
     * Amazon S3 on Outposts access point that is used by other Amazon Web
     * Services.</p> 
     */
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfiguration = std::move(value); }

    /**
     * <p>Contains the virtual private cloud (VPC) configuration for the specified
     * access point.</p>  <p>This element is empty if this access point is an
     * Amazon S3 on Outposts access point that is used by other Amazon Web
     * Services.</p> 
     */
    inline GetAccessPointResult& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Contains the virtual private cloud (VPC) configuration for the specified
     * access point.</p>  <p>This element is empty if this access point is an
     * Amazon S3 on Outposts access point that is used by other Amazon Web
     * Services.</p> 
     */
    inline GetAccessPointResult& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlockConfiguration() const{ return m_publicAccessBlockConfiguration; }

    
    inline void SetPublicAccessBlockConfiguration(const PublicAccessBlockConfiguration& value) { m_publicAccessBlockConfiguration = value; }

    
    inline void SetPublicAccessBlockConfiguration(PublicAccessBlockConfiguration&& value) { m_publicAccessBlockConfiguration = std::move(value); }

    
    inline GetAccessPointResult& WithPublicAccessBlockConfiguration(const PublicAccessBlockConfiguration& value) { SetPublicAccessBlockConfiguration(value); return *this;}

    
    inline GetAccessPointResult& WithPublicAccessBlockConfiguration(PublicAccessBlockConfiguration&& value) { SetPublicAccessBlockConfiguration(std::move(value)); return *this;}


    /**
     * <p>The date and time when the specified access point was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the specified access point was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time when the specified access point was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the specified access point was created.</p>
     */
    inline GetAccessPointResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the specified access point was created.</p>
     */
    inline GetAccessPointResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The name or alias of the access point.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_alias = value; }

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline void SetAlias(const char* value) { m_alias.assign(value); }

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline GetAccessPointResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline GetAccessPointResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline GetAccessPointResult& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The ARN of the access point.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p>The ARN of the access point.</p>
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArn = value; }

    /**
     * <p>The ARN of the access point.</p>
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArn = std::move(value); }

    /**
     * <p>The ARN of the access point.</p>
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArn.assign(value); }

    /**
     * <p>The ARN of the access point.</p>
     */
    inline GetAccessPointResult& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p>The ARN of the access point.</p>
     */
    inline GetAccessPointResult& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the access point.</p>
     */
    inline GetAccessPointResult& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}


    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline void SetEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { m_endpoints = value; }

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline void SetEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { m_endpoints = std::move(value); }

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline GetAccessPointResult& WithEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline GetAccessPointResult& WithEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline GetAccessPointResult& AddEndpoints(const Aws::String& key, const Aws::String& value) { m_endpoints.emplace(key, value); return *this; }

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline GetAccessPointResult& AddEndpoints(Aws::String&& key, const Aws::String& value) { m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline GetAccessPointResult& AddEndpoints(const Aws::String& key, Aws::String&& value) { m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline GetAccessPointResult& AddEndpoints(Aws::String&& key, Aws::String&& value) { m_endpoints.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline GetAccessPointResult& AddEndpoints(const char* key, Aws::String&& value) { m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline GetAccessPointResult& AddEndpoints(Aws::String&& key, const char* value) { m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>The VPC endpoint for the access point.</p>
     */
    inline GetAccessPointResult& AddEndpoints(const char* key, const char* value) { m_endpoints.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point.</p>
     */
    inline const Aws::String& GetBucketAccountId() const{ return m_bucketAccountId; }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point.</p>
     */
    inline void SetBucketAccountId(const Aws::String& value) { m_bucketAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point.</p>
     */
    inline void SetBucketAccountId(Aws::String&& value) { m_bucketAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point.</p>
     */
    inline void SetBucketAccountId(const char* value) { m_bucketAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point.</p>
     */
    inline GetAccessPointResult& WithBucketAccountId(const Aws::String& value) { SetBucketAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point.</p>
     */
    inline GetAccessPointResult& WithBucketAccountId(Aws::String&& value) { SetBucketAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point.</p>
     */
    inline GetAccessPointResult& WithBucketAccountId(const char* value) { SetBucketAccountId(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_bucket;

    NetworkOrigin m_networkOrigin;

    VpcConfiguration m_vpcConfiguration;

    PublicAccessBlockConfiguration m_publicAccessBlockConfiguration;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_alias;

    Aws::String m_accessPointArn;

    Aws::Map<Aws::String, Aws::String> m_endpoints;

    Aws::String m_bucketAccountId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
