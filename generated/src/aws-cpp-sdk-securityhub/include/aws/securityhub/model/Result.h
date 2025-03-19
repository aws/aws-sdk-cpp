/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about the account that was not processed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Result">AWS
   * API Reference</a></p>
   */
  class Result
  {
  public:
    AWS_SECURITYHUB_API Result() = default;
    AWS_SECURITYHUB_API Result(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Result& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Web Services account ID of the account that was not processed.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Result& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the account was not processed.</p>
     */
    inline const Aws::String& GetProcessingResult() const { return m_processingResult; }
    inline bool ProcessingResultHasBeenSet() const { return m_processingResultHasBeenSet; }
    template<typename ProcessingResultT = Aws::String>
    void SetProcessingResult(ProcessingResultT&& value) { m_processingResultHasBeenSet = true; m_processingResult = std::forward<ProcessingResultT>(value); }
    template<typename ProcessingResultT = Aws::String>
    Result& WithProcessingResult(ProcessingResultT&& value) { SetProcessingResult(std::forward<ProcessingResultT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_processingResult;
    bool m_processingResultHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
