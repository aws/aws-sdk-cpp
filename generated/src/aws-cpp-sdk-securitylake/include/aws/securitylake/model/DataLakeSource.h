/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/DataLakeSourceStatus.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Amazon Security Lake collects logs and events from supported Amazon Web
   * Services services and custom sources. For the list of supported Amazon Web
   * Services services, see the <a
   * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
   * Security Lake User Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeSource">AWS
   * API Reference</a></p>
   */
  class DataLakeSource
  {
  public:
    AWS_SECURITYLAKE_API DataLakeSource() = default;
    AWS_SECURITYLAKE_API DataLakeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Security Lake account for which logs are collected.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    DataLakeSource& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes describes the
     * type of data that the custom source will send to Security Lake. For the list of
     * supported event classes, see <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/adding-custom-sources.html#ocsf-eventclass.html">Supported
     * OCSF Event classes</a> in the Amazon Security Lake User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventClasses() const { return m_eventClasses; }
    inline bool EventClassesHasBeenSet() const { return m_eventClassesHasBeenSet; }
    template<typename EventClassesT = Aws::Vector<Aws::String>>
    void SetEventClasses(EventClassesT&& value) { m_eventClassesHasBeenSet = true; m_eventClasses = std::forward<EventClassesT>(value); }
    template<typename EventClassesT = Aws::Vector<Aws::String>>
    DataLakeSource& WithEventClasses(EventClassesT&& value) { SetEventClasses(std::forward<EventClassesT>(value)); return *this;}
    template<typename EventClassesT = Aws::String>
    DataLakeSource& AddEventClasses(EventClassesT&& value) { m_eventClassesHasBeenSet = true; m_eventClasses.emplace_back(std::forward<EventClassesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports log and event collection for natively
     * supported Amazon Web Services services.</p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    DataLakeSource& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log status for the Security Lake account.</p>
     */
    inline const Aws::Vector<DataLakeSourceStatus>& GetSourceStatuses() const { return m_sourceStatuses; }
    inline bool SourceStatusesHasBeenSet() const { return m_sourceStatusesHasBeenSet; }
    template<typename SourceStatusesT = Aws::Vector<DataLakeSourceStatus>>
    void SetSourceStatuses(SourceStatusesT&& value) { m_sourceStatusesHasBeenSet = true; m_sourceStatuses = std::forward<SourceStatusesT>(value); }
    template<typename SourceStatusesT = Aws::Vector<DataLakeSourceStatus>>
    DataLakeSource& WithSourceStatuses(SourceStatusesT&& value) { SetSourceStatuses(std::forward<SourceStatusesT>(value)); return *this;}
    template<typename SourceStatusesT = DataLakeSourceStatus>
    DataLakeSource& AddSourceStatuses(SourceStatusesT&& value) { m_sourceStatusesHasBeenSet = true; m_sourceStatuses.emplace_back(std::forward<SourceStatusesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventClasses;
    bool m_eventClassesHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::Vector<DataLakeSourceStatus> m_sourceStatuses;
    bool m_sourceStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
