/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/InstanceInfo.h>
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
   * <p>Information about a managed node's type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/NodeType">AWS API
   * Reference</a></p>
   */
  class NodeType
  {
  public:
    AWS_SSM_API NodeType();
    AWS_SSM_API NodeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API NodeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about a specific managed node.</p>
     */
    inline const InstanceInfo& GetInstance() const{ return m_instance; }
    inline bool InstanceHasBeenSet() const { return m_instanceHasBeenSet; }
    inline void SetInstance(const InstanceInfo& value) { m_instanceHasBeenSet = true; m_instance = value; }
    inline void SetInstance(InstanceInfo&& value) { m_instanceHasBeenSet = true; m_instance = std::move(value); }
    inline NodeType& WithInstance(const InstanceInfo& value) { SetInstance(value); return *this;}
    inline NodeType& WithInstance(InstanceInfo&& value) { SetInstance(std::move(value)); return *this;}
    ///@}
  private:

    InstanceInfo m_instance;
    bool m_instanceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
