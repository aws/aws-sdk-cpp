/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/AccountQuota.h>
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
namespace RDS
{
namespace Model
{
  /**
   * <p>Data returned by the <b>DescribeAccountAttributes</b> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AccountAttributesMessage">AWS
   * API Reference</a></p>
   */
  class DescribeAccountAttributesResult
  {
  public:
    AWS_RDS_API DescribeAccountAttributesResult() = default;
    AWS_RDS_API DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>AccountQuota</code> objects. Within this list, each quota has
     * a name, a count of usage toward the quota maximum, and a maximum value for the
     * quota.</p>
     */
    inline const Aws::Vector<AccountQuota>& GetAccountQuotas() const { return m_accountQuotas; }
    template<typename AccountQuotasT = Aws::Vector<AccountQuota>>
    void SetAccountQuotas(AccountQuotasT&& value) { m_accountQuotasHasBeenSet = true; m_accountQuotas = std::forward<AccountQuotasT>(value); }
    template<typename AccountQuotasT = Aws::Vector<AccountQuota>>
    DescribeAccountAttributesResult& WithAccountQuotas(AccountQuotasT&& value) { SetAccountQuotas(std::forward<AccountQuotasT>(value)); return *this;}
    template<typename AccountQuotasT = AccountQuota>
    DescribeAccountAttributesResult& AddAccountQuotas(AccountQuotasT&& value) { m_accountQuotasHasBeenSet = true; m_accountQuotas.emplace_back(std::forward<AccountQuotasT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAccountAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountQuota> m_accountQuotas;
    bool m_accountQuotasHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
