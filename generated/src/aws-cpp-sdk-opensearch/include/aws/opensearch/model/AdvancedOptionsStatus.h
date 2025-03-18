/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/OptionStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Status of the advanced options for the specified domain. The following
   * options are available: </p> <ul> <li> <p>
   * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
   * the use of a string rather than a boolean. Specifies whether explicit references
   * to indexes are allowed inside the body of HTTP requests. If you want to
   * configure access policies for domain sub-resources, such as specific indexes and
   * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
   * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
   * rather than a boolean. Specifies the percentage of heap space allocated to field
   * data. Default is unbounded.</p> </li> <li> <p>
   * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
   * string rather than a boolean. Specifies the maximum number of clauses allowed in
   * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
   * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
   * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
   * use of a string rather than a boolean. Specifies whether the domain reports its
   * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
   * working with it. Default is false when creating a domain and true when upgrading
   * a domain.</p> </li> </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
   * cluster parameters</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AdvancedOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AdvancedOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API AdvancedOptionsStatus() = default;
    AWS_OPENSEARCHSERVICE_API AdvancedOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AdvancedOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    AdvancedOptionsStatus& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsKeyT = Aws::String, typename OptionsValueT = Aws::String>
    AdvancedOptionsStatus& AddOptions(OptionsKeyT&& key, OptionsValueT&& value) {
      m_optionsHasBeenSet = true; m_options.emplace(std::forward<OptionsKeyT>(key), std::forward<OptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline const OptionStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = OptionStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = OptionStatus>
    AdvancedOptionsStatus& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
