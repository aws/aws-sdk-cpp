/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AIMLOptionsOutput.h>
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
   * <p>The status of machine learning options on the specified domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AIMLOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AIMLOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API AIMLOptionsStatus();
    AWS_OPENSEARCHSERVICE_API AIMLOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AIMLOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Machine learning options on the specified domain.</p>
     */
    inline const AIMLOptionsOutput& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const AIMLOptionsOutput& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(AIMLOptionsOutput&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline AIMLOptionsStatus& WithOptions(const AIMLOptionsOutput& value) { SetOptions(value); return *this;}
    inline AIMLOptionsStatus& WithOptions(AIMLOptionsOutput&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OptionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AIMLOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}
    inline AIMLOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    AIMLOptionsOutput m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
