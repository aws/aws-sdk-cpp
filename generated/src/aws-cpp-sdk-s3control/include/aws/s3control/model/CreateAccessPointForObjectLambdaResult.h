/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/ObjectLambdaAccessPointAlias.h>
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
  class CreateAccessPointForObjectLambdaResult
  {
  public:
    AWS_S3CONTROL_API CreateAccessPointForObjectLambdaResult() = default;
    AWS_S3CONTROL_API CreateAccessPointForObjectLambdaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API CreateAccessPointForObjectLambdaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetObjectLambdaAccessPointArn() const { return m_objectLambdaAccessPointArn; }
    template<typename ObjectLambdaAccessPointArnT = Aws::String>
    void SetObjectLambdaAccessPointArn(ObjectLambdaAccessPointArnT&& value) { m_objectLambdaAccessPointArnHasBeenSet = true; m_objectLambdaAccessPointArn = std::forward<ObjectLambdaAccessPointArnT>(value); }
    template<typename ObjectLambdaAccessPointArnT = Aws::String>
    CreateAccessPointForObjectLambdaResult& WithObjectLambdaAccessPointArn(ObjectLambdaAccessPointArnT&& value) { SetObjectLambdaAccessPointArn(std::forward<ObjectLambdaAccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the Object Lambda Access Point.</p>
     */
    inline const ObjectLambdaAccessPointAlias& GetAlias() const { return m_alias; }
    template<typename AliasT = ObjectLambdaAccessPointAlias>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = ObjectLambdaAccessPointAlias>
    CreateAccessPointForObjectLambdaResult& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAccessPointForObjectLambdaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    CreateAccessPointForObjectLambdaResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_objectLambdaAccessPointArn;
    bool m_objectLambdaAccessPointArnHasBeenSet = false;

    ObjectLambdaAccessPointAlias m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
