/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/CognitoOptions.h>
#include <aws/opensearch/model/OptionStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The status of the Cognito options for the specified domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CognitoOptionsStatus">AWS
   * API Reference</a></p>
   */
  class CognitoOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API CognitoOptionsStatus();
    AWS_OPENSEARCHSERVICE_API CognitoOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API CognitoOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Cognito options for the specified domain.</p>
     */
    inline const CognitoOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const CognitoOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(CognitoOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline CognitoOptionsStatus& WithOptions(const CognitoOptions& value) { SetOptions(value); return *this;}
    inline CognitoOptionsStatus& WithOptions(CognitoOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Cognito options for the specified domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CognitoOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}
    inline CognitoOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    CognitoOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
