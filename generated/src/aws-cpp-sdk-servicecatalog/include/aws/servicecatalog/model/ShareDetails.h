/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ShareError.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about the portfolio share operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ShareDetails">AWS
   * API Reference</a></p>
   */
  class ShareDetails
  {
  public:
    AWS_SERVICECATALOG_API ShareDetails() = default;
    AWS_SERVICECATALOG_API ShareDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ShareDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessfulShares() const { return m_successfulShares; }
    inline bool SuccessfulSharesHasBeenSet() const { return m_successfulSharesHasBeenSet; }
    template<typename SuccessfulSharesT = Aws::Vector<Aws::String>>
    void SetSuccessfulShares(SuccessfulSharesT&& value) { m_successfulSharesHasBeenSet = true; m_successfulShares = std::forward<SuccessfulSharesT>(value); }
    template<typename SuccessfulSharesT = Aws::Vector<Aws::String>>
    ShareDetails& WithSuccessfulShares(SuccessfulSharesT&& value) { SetSuccessfulShares(std::forward<SuccessfulSharesT>(value)); return *this;}
    template<typename SuccessfulSharesT = Aws::String>
    ShareDetails& AddSuccessfulShares(SuccessfulSharesT&& value) { m_successfulSharesHasBeenSet = true; m_successfulShares.emplace_back(std::forward<SuccessfulSharesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of errors.</p>
     */
    inline const Aws::Vector<ShareError>& GetShareErrors() const { return m_shareErrors; }
    inline bool ShareErrorsHasBeenSet() const { return m_shareErrorsHasBeenSet; }
    template<typename ShareErrorsT = Aws::Vector<ShareError>>
    void SetShareErrors(ShareErrorsT&& value) { m_shareErrorsHasBeenSet = true; m_shareErrors = std::forward<ShareErrorsT>(value); }
    template<typename ShareErrorsT = Aws::Vector<ShareError>>
    ShareDetails& WithShareErrors(ShareErrorsT&& value) { SetShareErrors(std::forward<ShareErrorsT>(value)); return *this;}
    template<typename ShareErrorsT = ShareError>
    ShareDetails& AddShareErrors(ShareErrorsT&& value) { m_shareErrorsHasBeenSet = true; m_shareErrors.emplace_back(std::forward<ShareErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_successfulShares;
    bool m_successfulSharesHasBeenSet = false;

    Aws::Vector<ShareError> m_shareErrors;
    bool m_shareErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
