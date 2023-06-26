/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

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
   * <p>Options for configuring service software updates for a domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/SoftwareUpdateOptions">AWS
   * API Reference</a></p>
   */
  class SoftwareUpdateOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API SoftwareUpdateOptions();
    AWS_OPENSEARCHSERVICE_API SoftwareUpdateOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API SoftwareUpdateOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether automatic service software updates are enabled for the domain.</p>
     */
    inline bool GetAutoSoftwareUpdateEnabled() const{ return m_autoSoftwareUpdateEnabled; }

    /**
     * <p>Whether automatic service software updates are enabled for the domain.</p>
     */
    inline bool AutoSoftwareUpdateEnabledHasBeenSet() const { return m_autoSoftwareUpdateEnabledHasBeenSet; }

    /**
     * <p>Whether automatic service software updates are enabled for the domain.</p>
     */
    inline void SetAutoSoftwareUpdateEnabled(bool value) { m_autoSoftwareUpdateEnabledHasBeenSet = true; m_autoSoftwareUpdateEnabled = value; }

    /**
     * <p>Whether automatic service software updates are enabled for the domain.</p>
     */
    inline SoftwareUpdateOptions& WithAutoSoftwareUpdateEnabled(bool value) { SetAutoSoftwareUpdateEnabled(value); return *this;}

  private:

    bool m_autoSoftwareUpdateEnabled;
    bool m_autoSoftwareUpdateEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
