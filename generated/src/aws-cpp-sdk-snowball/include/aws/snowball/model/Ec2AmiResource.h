/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>A JSON-formatted object that contains the IDs for an Amazon Machine Image
   * (AMI), including the Amazon EC2-compatible AMI ID and the Snow device AMI ID.
   * Each AMI has these two IDs to simplify identifying the AMI in both the Amazon
   * Web Services Cloud and on the device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/Ec2AmiResource">AWS
   * API Reference</a></p>
   */
  class Ec2AmiResource
  {
  public:
    AWS_SNOWBALL_API Ec2AmiResource() = default;
    AWS_SNOWBALL_API Ec2AmiResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Ec2AmiResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the AMI in Amazon EC2.</p>
     */
    inline const Aws::String& GetAmiId() const { return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    template<typename AmiIdT = Aws::String>
    void SetAmiId(AmiIdT&& value) { m_amiIdHasBeenSet = true; m_amiId = std::forward<AmiIdT>(value); }
    template<typename AmiIdT = Aws::String>
    Ec2AmiResource& WithAmiId(AmiIdT&& value) { SetAmiId(std::forward<AmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI on the Snow device.</p>
     */
    inline const Aws::String& GetSnowballAmiId() const { return m_snowballAmiId; }
    inline bool SnowballAmiIdHasBeenSet() const { return m_snowballAmiIdHasBeenSet; }
    template<typename SnowballAmiIdT = Aws::String>
    void SetSnowballAmiId(SnowballAmiIdT&& value) { m_snowballAmiIdHasBeenSet = true; m_snowballAmiId = std::forward<SnowballAmiIdT>(value); }
    template<typename SnowballAmiIdT = Aws::String>
    Ec2AmiResource& WithSnowballAmiId(SnowballAmiIdT&& value) { SetSnowballAmiId(std::forward<SnowballAmiIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::String m_snowballAmiId;
    bool m_snowballAmiIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
