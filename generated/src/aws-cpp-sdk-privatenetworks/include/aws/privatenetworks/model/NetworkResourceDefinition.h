/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/privatenetworks/model/NetworkResourceDefinitionType.h>
#include <aws/privatenetworks/model/NameValuePair.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about a network resource definition.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/NetworkResourceDefinition">AWS
   * API Reference</a></p>
   */
  class NetworkResourceDefinition
  {
  public:
    AWS_PRIVATENETWORKS_API NetworkResourceDefinition();
    AWS_PRIVATENETWORKS_API NetworkResourceDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API NetworkResourceDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The count in the network resource definition.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline NetworkResourceDefinition& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options in the network resource definition.</p>
     */
    inline const Aws::Vector<NameValuePair>& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Aws::Vector<NameValuePair>& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Aws::Vector<NameValuePair>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline NetworkResourceDefinition& WithOptions(const Aws::Vector<NameValuePair>& value) { SetOptions(value); return *this;}
    inline NetworkResourceDefinition& WithOptions(Aws::Vector<NameValuePair>&& value) { SetOptions(std::move(value)); return *this;}
    inline NetworkResourceDefinition& AddOptions(const NameValuePair& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }
    inline NetworkResourceDefinition& AddOptions(NameValuePair&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type in the network resource definition.</p>
     */
    inline const NetworkResourceDefinitionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NetworkResourceDefinitionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NetworkResourceDefinitionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline NetworkResourceDefinition& WithType(const NetworkResourceDefinitionType& value) { SetType(value); return *this;}
    inline NetworkResourceDefinition& WithType(NetworkResourceDefinitionType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::Vector<NameValuePair> m_options;
    bool m_optionsHasBeenSet = false;

    NetworkResourceDefinitionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
