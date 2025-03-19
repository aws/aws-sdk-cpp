/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/securitylake/model/CustomLogSourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class CreateCustomLogSourceRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateCustomLogSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomLogSource"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The configuration used for the third-party custom source.</p>
     */
    inline const CustomLogSourceConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = CustomLogSourceConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = CustomLogSourceConfiguration>
    CreateCustomLogSourceRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes which describes
     * the type of data that the custom source will send to Security Lake. For the list
     * of supported event classes, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/adding-custom-sources.html#ocsf-eventclass">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventClasses() const { return m_eventClasses; }
    inline bool EventClassesHasBeenSet() const { return m_eventClassesHasBeenSet; }
    template<typename EventClassesT = Aws::Vector<Aws::String>>
    void SetEventClasses(EventClassesT&& value) { m_eventClassesHasBeenSet = true; m_eventClasses = std::forward<EventClassesT>(value); }
    template<typename EventClassesT = Aws::Vector<Aws::String>>
    CreateCustomLogSourceRequest& WithEventClasses(EventClassesT&& value) { SetEventClasses(std::forward<EventClassesT>(value)); return *this;}
    template<typename EventClassesT = Aws::String>
    CreateCustomLogSourceRequest& AddEventClasses(EventClassesT&& value) { m_eventClassesHasBeenSet = true; m_eventClasses.emplace_back(std::forward<EventClassesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the name for a third-party custom source. This must be a Regionally
     * unique value. The <code>sourceName</code> you enter here, is used in the
     * <code>LogProviderRole</code> name which follows the convention
     * <code>AmazonSecurityLake-Provider-{name of the custom source}-{region}</code>.
     * You must use a <code>CustomLogSource</code> name that is shorter than or equal
     * to 20 characters. This ensures that the <code>LogProviderRole</code> name is
     * below the 64 character limit.</p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    CreateCustomLogSourceRequest& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the source version for the third-party custom source, to limit log
     * collection to a specific version of custom data source.</p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    CreateCustomLogSourceRequest& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}
  private:

    CustomLogSourceConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventClasses;
    bool m_eventClassesHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
