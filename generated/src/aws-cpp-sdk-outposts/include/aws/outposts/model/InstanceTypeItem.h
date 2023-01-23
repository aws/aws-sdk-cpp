/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p>Information about an instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/InstanceTypeItem">AWS
   * API Reference</a></p>
   */
  class InstanceTypeItem
  {
  public:
    AWS_OUTPOSTS_API InstanceTypeItem();
    AWS_OUTPOSTS_API InstanceTypeItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API InstanceTypeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    
    inline InstanceTypeItem& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    
    inline InstanceTypeItem& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    
    inline InstanceTypeItem& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
