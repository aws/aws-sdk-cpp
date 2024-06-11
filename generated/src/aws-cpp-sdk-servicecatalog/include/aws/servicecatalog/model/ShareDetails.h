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
    AWS_SERVICECATALOG_API ShareDetails();
    AWS_SERVICECATALOG_API ShareDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ShareDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessfulShares() const{ return m_successfulShares; }
    inline bool SuccessfulSharesHasBeenSet() const { return m_successfulSharesHasBeenSet; }
    inline void SetSuccessfulShares(const Aws::Vector<Aws::String>& value) { m_successfulSharesHasBeenSet = true; m_successfulShares = value; }
    inline void SetSuccessfulShares(Aws::Vector<Aws::String>&& value) { m_successfulSharesHasBeenSet = true; m_successfulShares = std::move(value); }
    inline ShareDetails& WithSuccessfulShares(const Aws::Vector<Aws::String>& value) { SetSuccessfulShares(value); return *this;}
    inline ShareDetails& WithSuccessfulShares(Aws::Vector<Aws::String>&& value) { SetSuccessfulShares(std::move(value)); return *this;}
    inline ShareDetails& AddSuccessfulShares(const Aws::String& value) { m_successfulSharesHasBeenSet = true; m_successfulShares.push_back(value); return *this; }
    inline ShareDetails& AddSuccessfulShares(Aws::String&& value) { m_successfulSharesHasBeenSet = true; m_successfulShares.push_back(std::move(value)); return *this; }
    inline ShareDetails& AddSuccessfulShares(const char* value) { m_successfulSharesHasBeenSet = true; m_successfulShares.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of errors.</p>
     */
    inline const Aws::Vector<ShareError>& GetShareErrors() const{ return m_shareErrors; }
    inline bool ShareErrorsHasBeenSet() const { return m_shareErrorsHasBeenSet; }
    inline void SetShareErrors(const Aws::Vector<ShareError>& value) { m_shareErrorsHasBeenSet = true; m_shareErrors = value; }
    inline void SetShareErrors(Aws::Vector<ShareError>&& value) { m_shareErrorsHasBeenSet = true; m_shareErrors = std::move(value); }
    inline ShareDetails& WithShareErrors(const Aws::Vector<ShareError>& value) { SetShareErrors(value); return *this;}
    inline ShareDetails& WithShareErrors(Aws::Vector<ShareError>&& value) { SetShareErrors(std::move(value)); return *this;}
    inline ShareDetails& AddShareErrors(const ShareError& value) { m_shareErrorsHasBeenSet = true; m_shareErrors.push_back(value); return *this; }
    inline ShareDetails& AddShareErrors(ShareError&& value) { m_shareErrorsHasBeenSet = true; m_shareErrors.push_back(std::move(value)); return *this; }
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
