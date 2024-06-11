/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A notification about the OpsItem.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemNotification">AWS
   * API Reference</a></p>
   */
  class OpsItemNotification
  {
  public:
    AWS_SSM_API OpsItemNotification();
    AWS_SSM_API OpsItemNotification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * (Amazon SNS) topic where notifications are sent when this OpsItem is edited or
     * changed.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline OpsItemNotification& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline OpsItemNotification& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline OpsItemNotification& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
