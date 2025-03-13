/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/AWSServiceName.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p>A running Amazon EC2 instance that can be stopped to free up capacity needed
   * to run the capacity task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/BlockingInstance">AWS
   * API Reference</a></p>
   */
  class BlockingInstance
  {
  public:
    AWS_OUTPOSTS_API BlockingInstance() = default;
    AWS_OUTPOSTS_API BlockingInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API BlockingInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the blocking instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    BlockingInstance& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    BlockingInstance& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service name that owns the specified blocking
     * instance.</p>
     */
    inline AWSServiceName GetAwsServiceName() const { return m_awsServiceName; }
    inline bool AwsServiceNameHasBeenSet() const { return m_awsServiceNameHasBeenSet; }
    inline void SetAwsServiceName(AWSServiceName value) { m_awsServiceNameHasBeenSet = true; m_awsServiceName = value; }
    inline BlockingInstance& WithAwsServiceName(AWSServiceName value) { SetAwsServiceName(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AWSServiceName m_awsServiceName{AWSServiceName::NOT_SET};
    bool m_awsServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
