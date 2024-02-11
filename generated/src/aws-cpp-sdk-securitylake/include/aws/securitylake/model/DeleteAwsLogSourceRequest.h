/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/AwsLogSourceConfiguration.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class DeleteAwsLogSourceRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API DeleteAwsLogSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAwsLogSource"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>Specify the natively-supported Amazon Web Services service to remove as a
     * source in Security Lake.</p>
     */
    inline const Aws::Vector<AwsLogSourceConfiguration>& GetSources() const{ return m_sources; }

    /**
     * <p>Specify the natively-supported Amazon Web Services service to remove as a
     * source in Security Lake.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>Specify the natively-supported Amazon Web Services service to remove as a
     * source in Security Lake.</p>
     */
    inline void SetSources(const Aws::Vector<AwsLogSourceConfiguration>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>Specify the natively-supported Amazon Web Services service to remove as a
     * source in Security Lake.</p>
     */
    inline void SetSources(Aws::Vector<AwsLogSourceConfiguration>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>Specify the natively-supported Amazon Web Services service to remove as a
     * source in Security Lake.</p>
     */
    inline DeleteAwsLogSourceRequest& WithSources(const Aws::Vector<AwsLogSourceConfiguration>& value) { SetSources(value); return *this;}

    /**
     * <p>Specify the natively-supported Amazon Web Services service to remove as a
     * source in Security Lake.</p>
     */
    inline DeleteAwsLogSourceRequest& WithSources(Aws::Vector<AwsLogSourceConfiguration>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>Specify the natively-supported Amazon Web Services service to remove as a
     * source in Security Lake.</p>
     */
    inline DeleteAwsLogSourceRequest& AddSources(const AwsLogSourceConfiguration& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>Specify the natively-supported Amazon Web Services service to remove as a
     * source in Security Lake.</p>
     */
    inline DeleteAwsLogSourceRequest& AddSources(AwsLogSourceConfiguration&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsLogSourceConfiguration> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
