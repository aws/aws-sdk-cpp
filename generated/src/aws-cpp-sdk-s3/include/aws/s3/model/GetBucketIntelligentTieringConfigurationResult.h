/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/IntelligentTieringConfiguration.h>
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
namespace S3
{
namespace Model
{
  class GetBucketIntelligentTieringConfigurationResult
  {
  public:
    AWS_S3_API GetBucketIntelligentTieringConfigurationResult() = default;
    AWS_S3_API GetBucketIntelligentTieringConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketIntelligentTieringConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Container for S3 Intelligent-Tiering configuration.</p>
     */
    inline const IntelligentTieringConfiguration& GetIntelligentTieringConfiguration() const { return m_intelligentTieringConfiguration; }
    template<typename IntelligentTieringConfigurationT = IntelligentTieringConfiguration>
    void SetIntelligentTieringConfiguration(IntelligentTieringConfigurationT&& value) { m_intelligentTieringConfigurationHasBeenSet = true; m_intelligentTieringConfiguration = std::forward<IntelligentTieringConfigurationT>(value); }
    template<typename IntelligentTieringConfigurationT = IntelligentTieringConfiguration>
    GetBucketIntelligentTieringConfigurationResult& WithIntelligentTieringConfiguration(IntelligentTieringConfigurationT&& value) { SetIntelligentTieringConfiguration(std::forward<IntelligentTieringConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketIntelligentTieringConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IntelligentTieringConfiguration m_intelligentTieringConfiguration;
    bool m_intelligentTieringConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
