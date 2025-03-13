/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes an algorithm image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/AlgorithmImage">AWS
   * API Reference</a></p>
   */
  class AlgorithmImage
  {
  public:
    AWS_PERSONALIZE_API AlgorithmImage() = default;
    AWS_PERSONALIZE_API AlgorithmImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API AlgorithmImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the algorithm image.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AlgorithmImage& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the Docker container for the algorithm image.</p>
     */
    inline const Aws::String& GetDockerURI() const { return m_dockerURI; }
    inline bool DockerURIHasBeenSet() const { return m_dockerURIHasBeenSet; }
    template<typename DockerURIT = Aws::String>
    void SetDockerURI(DockerURIT&& value) { m_dockerURIHasBeenSet = true; m_dockerURI = std::forward<DockerURIT>(value); }
    template<typename DockerURIT = Aws::String>
    AlgorithmImage& WithDockerURI(DockerURIT&& value) { SetDockerURI(std::forward<DockerURIT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_dockerURI;
    bool m_dockerURIHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
