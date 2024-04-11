/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * A direct source or destination neighbor to an AWS media resource.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaResourceNeighbor">AWS
   * API Reference</a></p>
   */
  class MediaResourceNeighbor
  {
  public:
    AWS_MEDIALIVE_API MediaResourceNeighbor();
    AWS_MEDIALIVE_API MediaResourceNeighbor(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaResourceNeighbor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of a resource used in AWS media workflows.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of a resource used in AWS media workflows.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The ARN of a resource used in AWS media workflows.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The ARN of a resource used in AWS media workflows.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The ARN of a resource used in AWS media workflows.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The ARN of a resource used in AWS media workflows.
     */
    inline MediaResourceNeighbor& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of a resource used in AWS media workflows.
     */
    inline MediaResourceNeighbor& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of a resource used in AWS media workflows.
     */
    inline MediaResourceNeighbor& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The logical name of an AWS media resource.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The logical name of an AWS media resource.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The logical name of an AWS media resource.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The logical name of an AWS media resource.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The logical name of an AWS media resource.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The logical name of an AWS media resource.
     */
    inline MediaResourceNeighbor& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The logical name of an AWS media resource.
     */
    inline MediaResourceNeighbor& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The logical name of an AWS media resource.
     */
    inline MediaResourceNeighbor& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
