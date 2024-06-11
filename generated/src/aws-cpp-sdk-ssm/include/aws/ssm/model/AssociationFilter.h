/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AssociationFilterKey.h>
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
   * <p>Describes a filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationFilter">AWS
   * API Reference</a></p>
   */
  class AssociationFilter
  {
  public:
    AWS_SSM_API AssociationFilter();
    AWS_SSM_API AssociationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p>  <p> <code>InstanceId</code> has been
     * deprecated.</p> 
     */
    inline const AssociationFilterKey& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const AssociationFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(AssociationFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline AssociationFilter& WithKey(const AssociationFilterKey& value) { SetKey(value); return *this;}
    inline AssociationFilter& WithKey(AssociationFilterKey&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline AssociationFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline AssociationFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline AssociationFilter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    AssociationFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
