/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/EncryptedLogGroupStrategy.h>
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
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   * <p>Configuration for selecting and handling source log groups for
   * centralization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/SourceLogsConfiguration">AWS
   * API Reference</a></p>
   */
  class SourceLogsConfiguration
  {
  public:
    AWS_OBSERVABILITYADMIN_API SourceLogsConfiguration() = default;
    AWS_OBSERVABILITYADMIN_API SourceLogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API SourceLogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The selection criteria that specifies which source log groups to centralize.
     * The selection criteria uses the same format as OAM link filters.</p>
     */
    inline const Aws::String& GetLogGroupSelectionCriteria() const { return m_logGroupSelectionCriteria; }
    inline bool LogGroupSelectionCriteriaHasBeenSet() const { return m_logGroupSelectionCriteriaHasBeenSet; }
    template<typename LogGroupSelectionCriteriaT = Aws::String>
    void SetLogGroupSelectionCriteria(LogGroupSelectionCriteriaT&& value) { m_logGroupSelectionCriteriaHasBeenSet = true; m_logGroupSelectionCriteria = std::forward<LogGroupSelectionCriteriaT>(value); }
    template<typename LogGroupSelectionCriteriaT = Aws::String>
    SourceLogsConfiguration& WithLogGroupSelectionCriteria(LogGroupSelectionCriteriaT&& value) { SetLogGroupSelectionCriteria(std::forward<LogGroupSelectionCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A strategy determining whether to centralize source log groups that are
     * encrypted with customer managed KMS keys (CMK). ALLOW will consider CMK
     * encrypted source log groups for centralization while SKIP will skip CMK
     * encrypted source log groups from centralization.</p>
     */
    inline EncryptedLogGroupStrategy GetEncryptedLogGroupStrategy() const { return m_encryptedLogGroupStrategy; }
    inline bool EncryptedLogGroupStrategyHasBeenSet() const { return m_encryptedLogGroupStrategyHasBeenSet; }
    inline void SetEncryptedLogGroupStrategy(EncryptedLogGroupStrategy value) { m_encryptedLogGroupStrategyHasBeenSet = true; m_encryptedLogGroupStrategy = value; }
    inline SourceLogsConfiguration& WithEncryptedLogGroupStrategy(EncryptedLogGroupStrategy value) { SetEncryptedLogGroupStrategy(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupSelectionCriteria;
    bool m_logGroupSelectionCriteriaHasBeenSet = false;

    EncryptedLogGroupStrategy m_encryptedLogGroupStrategy{EncryptedLogGroupStrategy::NOT_SET};
    bool m_encryptedLogGroupStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
