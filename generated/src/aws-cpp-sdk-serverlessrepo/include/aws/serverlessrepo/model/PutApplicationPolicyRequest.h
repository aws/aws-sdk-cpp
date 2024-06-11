/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/ApplicationPolicyStatement.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class PutApplicationPolicyRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API PutApplicationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutApplicationPolicy"; }

    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline PutApplicationPolicyRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline PutApplicationPolicyRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline PutApplicationPolicyRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline const Aws::Vector<ApplicationPolicyStatement>& GetStatements() const{ return m_statements; }
    inline bool StatementsHasBeenSet() const { return m_statementsHasBeenSet; }
    inline void SetStatements(const Aws::Vector<ApplicationPolicyStatement>& value) { m_statementsHasBeenSet = true; m_statements = value; }
    inline void SetStatements(Aws::Vector<ApplicationPolicyStatement>&& value) { m_statementsHasBeenSet = true; m_statements = std::move(value); }
    inline PutApplicationPolicyRequest& WithStatements(const Aws::Vector<ApplicationPolicyStatement>& value) { SetStatements(value); return *this;}
    inline PutApplicationPolicyRequest& WithStatements(Aws::Vector<ApplicationPolicyStatement>&& value) { SetStatements(std::move(value)); return *this;}
    inline PutApplicationPolicyRequest& AddStatements(const ApplicationPolicyStatement& value) { m_statementsHasBeenSet = true; m_statements.push_back(value); return *this; }
    inline PutApplicationPolicyRequest& AddStatements(ApplicationPolicyStatement&& value) { m_statementsHasBeenSet = true; m_statements.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Vector<ApplicationPolicyStatement> m_statements;
    bool m_statementsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
