/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/Order.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The quick response fields to order the quick response query results by.</p>
   * <p>The following is the list of supported field names.</p> <ul> <li> <p>name</p>
   * </li> <li> <p>description</p> </li> <li> <p>shortcutKey</p> </li> <li>
   * <p>isActive</p> </li> <li> <p>channels</p> </li> <li> <p>language</p> </li> <li>
   * <p>contentType</p> </li> <li> <p>createdTime</p> </li> <li>
   * <p>lastModifiedTime</p> </li> <li> <p>lastModifiedBy</p> </li> <li>
   * <p>groupingConfiguration.criteria</p> </li> <li>
   * <p>groupingConfiguration.values</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/QuickResponseOrderField">AWS
   * API Reference</a></p>
   */
  class QuickResponseOrderField
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API QuickResponseOrderField() = default;
    AWS_CONNECTWISDOMSERVICE_API QuickResponseOrderField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API QuickResponseOrderField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the attribute to order the quick response query results by.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    QuickResponseOrderField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order at which the quick responses are sorted by.</p>
     */
    inline Order GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(Order value) { m_orderHasBeenSet = true; m_order = value; }
    inline QuickResponseOrderField& WithOrder(Order value) { SetOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Order m_order{Order::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
