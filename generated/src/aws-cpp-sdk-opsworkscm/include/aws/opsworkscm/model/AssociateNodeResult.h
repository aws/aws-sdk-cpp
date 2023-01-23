/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
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
namespace OpsWorksCM
{
namespace Model
{
  class AssociateNodeResult
  {
  public:
    AWS_OPSWORKSCM_API AssociateNodeResult();
    AWS_OPSWORKSCM_API AssociateNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API AssociateNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains a token which can be passed to the
     * <code>DescribeNodeAssociationStatus</code> API call to get the status of the
     * association request. </p>
     */
    inline const Aws::String& GetNodeAssociationStatusToken() const{ return m_nodeAssociationStatusToken; }

    /**
     * <p>Contains a token which can be passed to the
     * <code>DescribeNodeAssociationStatus</code> API call to get the status of the
     * association request. </p>
     */
    inline void SetNodeAssociationStatusToken(const Aws::String& value) { m_nodeAssociationStatusToken = value; }

    /**
     * <p>Contains a token which can be passed to the
     * <code>DescribeNodeAssociationStatus</code> API call to get the status of the
     * association request. </p>
     */
    inline void SetNodeAssociationStatusToken(Aws::String&& value) { m_nodeAssociationStatusToken = std::move(value); }

    /**
     * <p>Contains a token which can be passed to the
     * <code>DescribeNodeAssociationStatus</code> API call to get the status of the
     * association request. </p>
     */
    inline void SetNodeAssociationStatusToken(const char* value) { m_nodeAssociationStatusToken.assign(value); }

    /**
     * <p>Contains a token which can be passed to the
     * <code>DescribeNodeAssociationStatus</code> API call to get the status of the
     * association request. </p>
     */
    inline AssociateNodeResult& WithNodeAssociationStatusToken(const Aws::String& value) { SetNodeAssociationStatusToken(value); return *this;}

    /**
     * <p>Contains a token which can be passed to the
     * <code>DescribeNodeAssociationStatus</code> API call to get the status of the
     * association request. </p>
     */
    inline AssociateNodeResult& WithNodeAssociationStatusToken(Aws::String&& value) { SetNodeAssociationStatusToken(std::move(value)); return *this;}

    /**
     * <p>Contains a token which can be passed to the
     * <code>DescribeNodeAssociationStatus</code> API call to get the status of the
     * association request. </p>
     */
    inline AssociateNodeResult& WithNodeAssociationStatusToken(const char* value) { SetNodeAssociationStatusToken(value); return *this;}

  private:

    Aws::String m_nodeAssociationStatusToken;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
