/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   */
  class DeleteEnvironmentRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API DeleteEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEnvironment"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the environment. </p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const { return m_environmentIdentifier; }
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }
    template<typename EnvironmentIdentifierT = Aws::String>
    void SetEnvironmentIdentifier(EnvironmentIdentifierT&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::forward<EnvironmentIdentifierT>(value); }
    template<typename EnvironmentIdentifierT = Aws::String>
    DeleteEnvironmentRequest& WithEnvironmentIdentifier(EnvironmentIdentifierT&& value) { SetEnvironmentIdentifier(std::forward<EnvironmentIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
