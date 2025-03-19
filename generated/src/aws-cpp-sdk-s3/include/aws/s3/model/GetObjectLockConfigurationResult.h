/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ObjectLockConfiguration.h>
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
  class GetObjectLockConfigurationResult
  {
  public:
    AWS_S3_API GetObjectLockConfigurationResult() = default;
    AWS_S3_API GetObjectLockConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetObjectLockConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The specified bucket's Object Lock configuration.</p>
     */
    inline const ObjectLockConfiguration& GetObjectLockConfiguration() const { return m_objectLockConfiguration; }
    template<typename ObjectLockConfigurationT = ObjectLockConfiguration>
    void SetObjectLockConfiguration(ObjectLockConfigurationT&& value) { m_objectLockConfigurationHasBeenSet = true; m_objectLockConfiguration = std::forward<ObjectLockConfigurationT>(value); }
    template<typename ObjectLockConfigurationT = ObjectLockConfiguration>
    GetObjectLockConfigurationResult& WithObjectLockConfiguration(ObjectLockConfigurationT&& value) { SetObjectLockConfiguration(std::forward<ObjectLockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetObjectLockConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ObjectLockConfiguration m_objectLockConfiguration;
    bool m_objectLockConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
