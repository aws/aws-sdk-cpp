/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/personalize-events/PersonalizeEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize-events/model/User.h>
#include <utility>

namespace Aws
{
namespace PersonalizeEvents
{
namespace Model
{

  /**
   */
  class PutUsersRequest : public PersonalizeEventsRequest
  {
  public:
    AWS_PERSONALIZEEVENTS_API PutUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutUsers"; }

    AWS_PERSONALIZEEVENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Users dataset you are adding the user
     * or users to.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Users dataset you are adding the user
     * or users to.</p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Users dataset you are adding the user
     * or users to.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Users dataset you are adding the user
     * or users to.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Users dataset you are adding the user
     * or users to.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Users dataset you are adding the user
     * or users to.</p>
     */
    inline PutUsersRequest& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Users dataset you are adding the user
     * or users to.</p>
     */
    inline PutUsersRequest& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Users dataset you are adding the user
     * or users to.</p>
     */
    inline PutUsersRequest& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>A list of user data.</p>
     */
    inline const Aws::Vector<User>& GetUsers() const{ return m_users; }

    /**
     * <p>A list of user data.</p>
     */
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }

    /**
     * <p>A list of user data.</p>
     */
    inline void SetUsers(const Aws::Vector<User>& value) { m_usersHasBeenSet = true; m_users = value; }

    /**
     * <p>A list of user data.</p>
     */
    inline void SetUsers(Aws::Vector<User>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }

    /**
     * <p>A list of user data.</p>
     */
    inline PutUsersRequest& WithUsers(const Aws::Vector<User>& value) { SetUsers(value); return *this;}

    /**
     * <p>A list of user data.</p>
     */
    inline PutUsersRequest& WithUsers(Aws::Vector<User>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>A list of user data.</p>
     */
    inline PutUsersRequest& AddUsers(const User& value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }

    /**
     * <p>A list of user data.</p>
     */
    inline PutUsersRequest& AddUsers(User&& value) { m_usersHasBeenSet = true; m_users.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::Vector<User> m_users;
    bool m_usersHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
