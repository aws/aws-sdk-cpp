﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that stores the details of the Amazon Web Services managed
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AttachedManagedPolicy">AWS
   * API Reference</a></p>
   */
  class AttachedManagedPolicy
  {
  public:
    AWS_SSOADMIN_API AttachedManagedPolicy();
    AWS_SSOADMIN_API AttachedManagedPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API AttachedManagedPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon Web Services managed policy. For more information about
     * ARNs, see <a href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AttachedManagedPolicy& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AttachedManagedPolicy& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AttachedManagedPolicy& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services managed policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AttachedManagedPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AttachedManagedPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AttachedManagedPolicy& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
