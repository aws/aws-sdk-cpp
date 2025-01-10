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
    AWS_SECURITYLAKE_API DataLakeSource();
    AWS_SECURITYLAKE_API DataLakeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Security Lake account for which logs are collected.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }
    inline DataLakeSource& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}
    inline DataLakeSource& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}
    inline DataLakeSource& WithAccount(const char* value) { SetAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes describes the
     * type of data that the custom source will send to Security Lake. For the list of
     * supported event classes, see <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/adding-custom-sources.html#ocsf-eventclass.html">Supported
     * OCSF Event classes</a> in the Amazon Security Lake User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventClasses() const{ return m_eventClasses; }
    inline bool EventClassesHasBeenSet() const { return m_eventClassesHasBeenSet; }
    inline void SetEventClasses(const Aws::Vector<Aws::String>& value) { m_eventClassesHasBeenSet = true; m_eventClasses = value; }
    inline void SetEventClasses(Aws::Vector<Aws::String>&& value) { m_eventClassesHasBeenSet = true; m_eventClasses = std::move(value); }
    inline DataLakeSource& WithEventClasses(const Aws::Vector<Aws::String>& value) { SetEventClasses(value); return *this;}
    inline DataLakeSource& WithEventClasses(Aws::Vector<Aws::String>&& value) { SetEventClasses(std::move(value)); return *this;}
    inline DataLakeSource& AddEventClasses(const Aws::String& value) { m_eventClassesHasBeenSet = true; m_eventClasses.push_back(value); return *this; }
    inline DataLakeSource& AddEventClasses(Aws::String&& value) { m_eventClassesHasBeenSet = true; m_eventClasses.push_back(std::move(value)); return *this; }
    inline DataLakeSource& AddEventClasses(const char* value) { m_eventClassesHasBeenSet = true; m_eventClasses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports log and event collection for natively
     * supported Amazon Web Services services.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }
    inline DataLakeSource& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}
    inline DataLakeSource& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}
    inline DataLakeSource& WithSourceName(const char* value) { SetSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log status for the Security Lake account.</p>
     */
    inline const Aws::Vector<DataLakeSourceStatus>& GetSourceStatuses() const{ return m_sourceStatuses; }
    inline bool SourceStatusesHasBeenSet() const { return m_sourceStatusesHasBeenSet; }
    inline void SetSourceStatuses(const Aws::Vector<DataLakeSourceStatus>& value) { m_sourceStatusesHasBeenSet = true; m_sourceStatuses = value; }
    inline void SetSourceStatuses(Aws::Vector<DataLakeSourceStatus>&& value) { m_sourceStatusesHasBeenSet = true; m_sourceStatuses = std::move(value); }
    inline DataLakeSource& WithSourceStatuses(const Aws::Vector<DataLakeSourceStatus>& value) { SetSourceStatuses(value); return *this;}
    inline DataLakeSource& WithSourceStatuses(Aws::Vector<DataLakeSourceStatus>&& value) { SetSourceStatuses(std::move(value)); return *this;}
    inline DataLakeSource& AddSourceStatuses(const DataLakeSourceStatus& value) { m_sourceStatusesHasBeenSet = true; m_sourceStatuses.push_back(value); return *this; }
    inline DataLakeSource& AddSourceStatuses(DataLakeSourceStatus&& value) { m_sourceStatusesHasBeenSet = true; m_sourceStatuses.push_back(std::move(value)); return *this; }
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
