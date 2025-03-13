/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
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
namespace S3Control
{
namespace Model
{
  class GetAccessGrantsInstanceForPrefixResult
  {
  public:
    AWS_S3CONTROL_API GetAccessGrantsInstanceForPrefixResult() = default;
    AWS_S3CONTROL_API GetAccessGrantsInstanceForPrefixResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessGrantsInstanceForPrefixResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceArn() const { return m_accessGrantsInstanceArn; }
    template<typename AccessGrantsInstanceArnT = Aws::String>
    void SetAccessGrantsInstanceArn(AccessGrantsInstanceArnT&& value) { m_accessGrantsInstanceArnHasBeenSet = true; m_accessGrantsInstanceArn = std::forward<AccessGrantsInstanceArnT>(value); }
    template<typename AccessGrantsInstanceArnT = Aws::String>
    GetAccessGrantsInstanceForPrefixResult& WithAccessGrantsInstanceArn(AccessGrantsInstanceArnT&& value) { SetAccessGrantsInstanceArn(std::forward<AccessGrantsInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceId() const { return m_accessGrantsInstanceId; }
    template<typename AccessGrantsInstanceIdT = Aws::String>
    void SetAccessGrantsInstanceId(AccessGrantsInstanceIdT&& value) { m_accessGrantsInstanceIdHasBeenSet = true; m_accessGrantsInstanceId = std::forward<AccessGrantsInstanceIdT>(value); }
    template<typename AccessGrantsInstanceIdT = Aws::String>
    GetAccessGrantsInstanceForPrefixResult& WithAccessGrantsInstanceId(AccessGrantsInstanceIdT&& value) { SetAccessGrantsInstanceId(std::forward<AccessGrantsInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccessGrantsInstanceForPrefixResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    GetAccessGrantsInstanceForPrefixResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessGrantsInstanceArn;
    bool m_accessGrantsInstanceArnHasBeenSet = false;

    Aws::String m_accessGrantsInstanceId;
    bool m_accessGrantsInstanceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
