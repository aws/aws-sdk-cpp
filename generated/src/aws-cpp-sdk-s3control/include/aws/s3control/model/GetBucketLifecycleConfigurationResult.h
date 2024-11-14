/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/LifecycleRule.h>
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
  class GetBucketLifecycleConfigurationResult
  {
  public:
    AWS_S3CONTROL_API GetBucketLifecycleConfigurationResult();
    AWS_S3CONTROL_API GetBucketLifecycleConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetBucketLifecycleConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Container for the lifecycle rule of the Outposts bucket.</p>
     */
    inline const Aws::Vector<LifecycleRule>& GetRules() const{ return m_rules; }
    inline void SetRules(const Aws::Vector<LifecycleRule>& value) { m_rules = value; }
    inline void SetRules(Aws::Vector<LifecycleRule>&& value) { m_rules = std::move(value); }
    inline GetBucketLifecycleConfigurationResult& WithRules(const Aws::Vector<LifecycleRule>& value) { SetRules(value); return *this;}
    inline GetBucketLifecycleConfigurationResult& WithRules(Aws::Vector<LifecycleRule>&& value) { SetRules(std::move(value)); return *this;}
    inline GetBucketLifecycleConfigurationResult& AddRules(const LifecycleRule& value) { m_rules.push_back(value); return *this; }
    inline GetBucketLifecycleConfigurationResult& AddRules(LifecycleRule&& value) { m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBucketLifecycleConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBucketLifecycleConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBucketLifecycleConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetBucketLifecycleConfigurationResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetBucketLifecycleConfigurationResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetBucketLifecycleConfigurationResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LifecycleRule> m_rules;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
