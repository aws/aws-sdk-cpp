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
    AWS_OUTPOSTS_API BlockingInstance();
    AWS_OUTPOSTS_API BlockingInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API BlockingInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the blocking instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline BlockingInstance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline BlockingInstance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline BlockingInstance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline BlockingInstance& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline BlockingInstance& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline BlockingInstance& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service name that owns the specified blocking
     * instance.</p>
     */
    inline const AWSServiceName& GetAwsServiceName() const{ return m_awsServiceName; }
    inline bool AwsServiceNameHasBeenSet() const { return m_awsServiceNameHasBeenSet; }
    inline void SetAwsServiceName(const AWSServiceName& value) { m_awsServiceNameHasBeenSet = true; m_awsServiceName = value; }
    inline void SetAwsServiceName(AWSServiceName&& value) { m_awsServiceNameHasBeenSet = true; m_awsServiceName = std::move(value); }
    inline BlockingInstance& WithAwsServiceName(const AWSServiceName& value) { SetAwsServiceName(value); return *this;}
    inline BlockingInstance& WithAwsServiceName(AWSServiceName&& value) { SetAwsServiceName(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AWSServiceName m_awsServiceName;
    bool m_awsServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
