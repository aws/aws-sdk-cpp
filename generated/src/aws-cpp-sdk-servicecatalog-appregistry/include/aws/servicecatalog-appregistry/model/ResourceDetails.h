/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
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
namespace AppRegistry
{
namespace Model
{

  /**
   * <p> The details related to the resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class ResourceDetails
  {
  public:
    AWS_APPREGISTRY_API ResourceDetails() = default;
    AWS_APPREGISTRY_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the tag.</p>
     */
    inline const Aws::String& GetTagValue() const { return m_tagValue; }
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
    template<typename TagValueT = Aws::String>
    void SetTagValue(TagValueT&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::forward<TagValueT>(value); }
    template<typename TagValueT = Aws::String>
    ResourceDetails& WithTagValue(TagValueT&& value) { SetTagValue(std::forward<TagValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
