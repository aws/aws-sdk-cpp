/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ThreatIntelIndicatorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ThreatIntelIndicatorCategory.h>
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
   * <p>Details about the threat intelligence related to a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ThreatIntelIndicator">AWS
   * API Reference</a></p>
   */
  class ThreatIntelIndicator
  {
  public:
    AWS_SECURITYHUB_API ThreatIntelIndicator() = default;
    AWS_SECURITYHUB_API ThreatIntelIndicator(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ThreatIntelIndicator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of threat intelligence indicator.</p>
     */
    inline ThreatIntelIndicatorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ThreatIntelIndicatorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ThreatIntelIndicator& WithType(ThreatIntelIndicatorType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a threat intelligence indicator.</p> <p>Length Constraints:
     * Minimum of 1 length. Maximum of 512 length.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ThreatIntelIndicator& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of a threat intelligence indicator.</p>
     */
    inline ThreatIntelIndicatorCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(ThreatIntelIndicatorCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline ThreatIntelIndicator& WithCategory(ThreatIntelIndicatorCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the most recent instance of a threat intelligence indicator
     * was observed.</p> <p>For more information about the validation and formatting of
     * timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastObservedAt() const { return m_lastObservedAt; }
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
    template<typename LastObservedAtT = Aws::String>
    void SetLastObservedAt(LastObservedAtT&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::forward<LastObservedAtT>(value); }
    template<typename LastObservedAtT = Aws::String>
    ThreatIntelIndicator& WithLastObservedAt(LastObservedAtT&& value) { SetLastObservedAt(std::forward<LastObservedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the threat intelligence indicator.</p> <p>Length Constraints:
     * Minimum of 1 length. Maximum of 64 length.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    ThreatIntelIndicator& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the page or site where you can get more information about the
     * threat intelligence indicator.</p>
     */
    inline const Aws::String& GetSourceUrl() const { return m_sourceUrl; }
    inline bool SourceUrlHasBeenSet() const { return m_sourceUrlHasBeenSet; }
    template<typename SourceUrlT = Aws::String>
    void SetSourceUrl(SourceUrlT&& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = std::forward<SourceUrlT>(value); }
    template<typename SourceUrlT = Aws::String>
    ThreatIntelIndicator& WithSourceUrl(SourceUrlT&& value) { SetSourceUrl(std::forward<SourceUrlT>(value)); return *this;}
    ///@}
  private:

    ThreatIntelIndicatorType m_type{ThreatIntelIndicatorType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ThreatIntelIndicatorCategory m_category{ThreatIntelIndicatorCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_sourceUrl;
    bool m_sourceUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
